#include "ANNModel.h"
#include "Compiled_ANNModel.h"
#include "func_lib/signmod.h"
#include "func_lib/sqrt_cost.h"
#include "func_lib/linear.h"
#include "func_lib/relu.h"
#include "global_config.h"
#include <ctime>

#define DATA_PATH "../data/1.in"




// void make_linear_data() {
//     srand(time(NULL));
//     freopen(DATA_PATH, "w", stdout);
//     int cnt = 100;
//     while(cnt--) {
//         double x = rand() / 3768.0;
//         double noise = (rand() - 16384) / 1000000.0;
//         double y = model_func(x) + noise;
//         std::cout << x << " " << y << std::endl;
//     }
// }
// void make_sin_data() {
//     srand(time(NULL));
//     freopen(DATA_PATH, "w", stdout);
//     int cnt = 100;
//     while(cnt--) {
//         double x = ( (rand() << 15) |  rand()) / 1073741824.0 * 4;
//         double noise = (rand() - 16384)/ 10000000.0;
//         double y = 5*sin(x) + noise;
//         printf("%.14lf %.14lf\n", x, y);
//         std::cout << x << " " << y << std::endl;
//     }
// }


double model_func(double x) {
    return x*x - x + 3.5;
}

void test_model() {
    ANNModel model;
    model.cost = Sqrt_Cost_Func::sqrt_cost;
    model.d_cost = Sqrt_Cost_Func::d_sqrt_cost;
    model.data_vector_size = 1;
    model.learning_rate = 0.01;
    ANNLayer layer0(1);
    layer0.activition = Linear_Func::linear;
    layer0.d_activition = Linear_Func::linear;
    model.add_layer(layer0);

    ANNLayer layer1(20);
    layer1.activition = Signmod_Func::signmod;
    layer1.d_activition = Signmod_Func::d_signmod;
    model.add_layer(layer1);

    ANNLayer layer2(1);
    layer2.activition = Linear_Func::linear;
    layer2.d_activition = Linear_Func::d_linear;
    model.add_layer(layer2);
    Compiled_ANNModel compiled_model = model.compile();

    
    auto csv_fp = fopen("../data/output.csv", "w");
    fprintf(csv_fp, "x,expectation,model_output\n");
    srand(time(NULL));
    int round = 0;
    long double avg_cost = 0.0;
    int flag = 0;    
    while(flag < 100) {
        round++;
        double x = ( (rand() << 15) |  rand()) / 1073741824.0 * 4;
        double noise = (rand() - 16384)/ 10000000.0;
        double y = 5*model_func(x) + noise;
        Vector input(1, 1);
        Vector expectation(1, 1);
        input.a[0][0] = x;
        expectation.a[0][0] = y;
        Vector output = compiled_model.feed(input, expectation);  
        avg_cost = avg_cost * ((round - 1) / (1.0 * round)) + Sqrt_Cost_Func::sqrt_cost(output, expectation) / round;
        if(round % 10000 == 0) {
            std::cout << "Avg_Cost <<" << avg_cost << ">>" << "\n";
        }
        if (avg_cost < 1) {
            fprintf(csv_fp, "%lf, %lf, %lf\n", x, y, (double)output.a[0][0]);
            flag++;
        }  
    }
    fclose(csv_fp);
}






void add_test_func(void (* a)() ) {
    printf("Test start\n");
    int start_time = clock();
    a();
    int end_time = clock();
    printf("Test end in : %dms\n", end_time - start_time);
}
int main(int, char**) {
    add_test_func(test_model);
}
