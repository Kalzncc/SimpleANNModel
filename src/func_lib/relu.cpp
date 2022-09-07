#include "relu.h"
long double Relu_Func::relu(long double x) {
    return  x > 0 ? x : 0.0;

}
long double Relu_Func::d_relu(long double x) {
    return x > 0 ? 1.0 : 0.0;
}
