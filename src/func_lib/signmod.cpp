#include "signmod.h"
long double Signmod_Func::signmod(long double x) {
    return  1.0/ (1 + exp(-x));

}
long double Signmod_Func::d_signmod(long double x) {
    long double e_x = exp(-x);
    return  e_x / ((1 + e_x) * (1 + e_x));
}
