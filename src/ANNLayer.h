#ifndef ANNLAYER
#define ANNLAYER
#include "global_config.h"
class ANNLayer {
public:
    long double (*activition)(long double x);
    long double (*d_activition)(long double x);
    ANNLayer();
    ANNLayer(int layer_szie);
    int layer_size;
};
#endif