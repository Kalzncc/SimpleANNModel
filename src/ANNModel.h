#ifndef ANNMODEL
#define ANNMODEL
#include "global_config.h"
#include "ANNLayer.h"
#include "Compiled_ANNModel.h"
class ANNModel {
private:
    void rand_matrix(Matrix &matrix);
public:
    int data_vector_size;
    double learning_rate;
    int bitch_size;
    std::vector<ANNLayer> layers;
    long double (*cost)(const Vector &real, const Vector &expectation);
    Vector (*d_cost)(const Vector &real, const Vector &expectation);    
    void add_layer(ANNLayer layer);
    void add_layer(int size);
    Compiled_ANNModel compile();
    ~ANNModel();
};
#endif