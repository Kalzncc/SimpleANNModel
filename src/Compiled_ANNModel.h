#ifndef C_ANNMODEL
#define C_ANNMODEL
#include "global_config.h"
#include "tools/Matrix.h"
class Compiled_ANNModel {
private:
    
    Vector cur_data;
    void backpropagate(Vector &round_a);
    void update_w_b();
public:
    int data_vector_size;
    int round = 0;
    double avg_cost = 0.0;
    int edge_count;
    int layer_size;
    double learning_rate;
    int bitch_size;
    std::vector<Matrix> w;    
    std::vector<Vector> b;
    std::vector<Vector> a;
    std::vector<Vector> z;
    std::vector<Matrix> delta_w;
    std::vector<Vector> delta_b;
    long double (*data_activition) (long double z);
    std::vector<long double (*)(long double z)> activitions;
    std::vector<long double (*)(long double z)> d_activitions;
    long double (*cost)(const Vector &real, const Vector &expectation);
    Vector (*d_cost)(const Vector &real, const Vector &expectation);
    Vector feed(Vector data, Vector expectation);
    Vector get_output(Vector data);
    ~Compiled_ANNModel();
};
#endif