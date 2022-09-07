#include "ANNModel.h"
#include "Compiled_ANNModel.h"

Compiled_ANNModel::~Compiled_ANNModel() {}
Vector Compiled_ANNModel::feed(Vector data, Vector expectation) {
#ifdef __DEBUG
    std::string debug_str = "Data [";
    for (int i = 0; i < data.n; i++) {
        debug_str += std::to_string(data.a[i][0]) + " ";
    }
    debug_str += "] has been fed.";
    LOG::log(LOG::DEBUG, debug_str);
#endif
    round++;
    // Input layer invoke activition function
    data = data.run(data_activition);
    // Get output layer vector
    Matrix cur_a = get_output(data);
    // Invoke cost function
    long double cur_cost = cost(cur_a, expectation);

    // Invoke the partial derivative of cost function, to prepare to backpropagate. 
    Vector cur_d_cost = d_cost(cur_a, expectation);

    // Backpropagation (Get delta w, delta b)
    backpropagate(cur_d_cost);
    
    // Backpropagation (Upate w and b matrix)
    update_w_b();

#ifdef __DEBUG
    debug_str = "Output [";
    for (int i = 0; i < data.n; i++) {
        debug_str += std::to_string(cur_a.a[i][0]) + " ";
    }
    debug_str += "].";
    std::cout << debug_str << "\n";
    debug_str = "Expect [";
    for (int i = 0; i < data.n; i++) {
        debug_str += std::to_string(expectation.a[i][0]) + " ";
    }
    debug_str += "].";
    std::cout << debug_str << "\n";
    std::cout << "Cost <<" << cur_cost << ">>" << "\n";
    std::cout << "Current W Matrix : " << "\n";
    for (int i = 0; i < layer_size; i++) {
        std::cout << "Layer " << i << " >> " << "\n";
        delta_w[i].print();
    }
#endif
    return cur_a;
}
void Compiled_ANNModel::backpropagate(Vector &round_a) {
    for (int l = layer_size-1; l >= 0; l--) {
        for (int j = 0; j < b[l].n; j++) {
            delta_b[l].a[j][0] = d_activitions[l](z[l].a[j][0]) * round_a.a[j][0]; 
            int last_layer_size = l ? b[l-1].n : data_vector_size;
            for (int k = 0; k < last_layer_size; k++) {
                long double cur_a = 0.0;
                if (l) cur_a = a[l-1].a[k][0];
                else cur_a = cur_data.a[k][0];
                delta_w[l].a[j][k] = delta_b[l].a[j][0] * cur_a;
            }
        }        
        if (!l) break;
        int last_layer_size = l ? b[l-1].n : data_vector_size;
        Vector new_round_a(last_layer_size ,1);
        for (int last_item = 0; last_item < last_layer_size; last_item++) {
            long double new_value = 0.0;
            for (int j = 0; j < b[l].n; j++) {
                new_value += w[l].a[j][last_item] * d_activitions[l](z[l].a[j][0]) * round_a.a[j][0];
            }
            new_round_a.a[last_item][0] = new_value;
        }
        round_a = new_round_a;
    }
}
Vector Compiled_ANNModel::get_output(Vector data) {
    cur_data = data;
    Matrix cur_a = data;
    for (int i = 0; i < layer_size; i++) {
        cur_a =   w[i] * cur_a;
        cur_a = cur_a + b[i];
        z[i] = cur_a;
        cur_a = cur_a.run(activitions[i]);
        a[i] = cur_a;
    }
    return cur_a;
}

void Compiled_ANNModel::update_w_b() {
    for(int i = 0; i < layer_size; i++) {
        Vector &cur_b = b[i];
        Matrix &cur_w = w[i];
        for (int j = 0; j < cur_b.n; j++) {
            cur_b.a[j][0] -= delta_b[i].a[j][0] * learning_rate;
            for (int k = 0; k < cur_w.m; k++) {
                cur_w.a[j][k] -= delta_w[i].a[j][k] * learning_rate; 
            }
        }
    }
}
