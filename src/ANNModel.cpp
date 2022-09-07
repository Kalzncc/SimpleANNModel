#include "ANNModel.h"

ANNModel::~ANNModel() {}

void ANNModel::rand_matrix(Matrix &matrix) {
    for (int i = 0; i < matrix.n; i++)
        for (int j = 0; j < matrix.m; j++) {
            long double res = rand() / 32768.0;
            matrix.a[i][j] = res;
        }
    
}

Compiled_ANNModel ANNModel::compile() {
    if (layers.size() <= 2) throw "Layer must more than 2.";
    srand(time(NULL));
    Compiled_ANNModel model;
    // Set layer size (Exclude input layer)
    model.layer_size = layers.size()-1;
    // Set input layer activition (it is f(x)=x generally)
    model.data_activition = layers[0].activition;
    // Set cost function 
    model.cost = cost;
    // Set partial derivative of cost
    model.d_cost = d_cost;
    // Set learning rate
    model.learning_rate = learning_rate;

    // invalid so far
    model.bitch_size = bitch_size;

    // Set input vector size
    model.data_vector_size = layers[0].layer_size;

    model.activitions = std::vector<long double(*)(long double)>(layers.size()-1);
    model.d_activitions = std::vector<long double(*)(long double)>(layers.size()-1);
    model.w = std::vector<Matrix>(model.layer_size);
    model.delta_w = std::vector<Matrix>(model.layer_size);
    model.b = std::vector<Matrix>(model.layer_size);
    model.delta_b = std::vector<Matrix>(model.layer_size);
    model.a = std::vector<Matrix>(model.layer_size);
    model.z = std::vector<Matrix>(model.layer_size);
    int last_layer_size = data_vector_size;

    // Set w, b matrix and activition for every layers (Exclude input layer)
    for (int i = 0; i < model.layer_size; i++) {
        model.w[i] = Matrix(layers[i+1].layer_size, last_layer_size);
        model.delta_w[i] = Matrix(layers[i+1].layer_size, last_layer_size);
        rand_matrix(model.w[i]);
        model.b[i] = Matrix(layers[i+1].layer_size, 1);
        model.delta_b[i] = Matrix(layers[i+1].layer_size, 1);
        rand_matrix(model.b[i]);
        model.a[i] = Matrix(layers[i+1].layer_size, 1);
        model.z[i] = Matrix(layers[i+1].layer_size, 1);
        last_layer_size = layers[i+1].layer_size;
        model.activitions[i] = layers[i+1].activition;
        model.d_activitions[i] = layers[i+1].d_activition;
    }
    return model;
}
void ANNModel::add_layer(ANNLayer layer) {
    layers.push_back(layer);
}
void ANNModel::add_layer(int size) {
    ANNLayer layer;
    layer.layer_size = size;
    add_layer(layer);
}