#include "sqrt_cost.h"

long double Sqrt_Cost_Func::sqrt_cost(const Vector &a, const Vector &y) {
    long double result = 0.0;
    for (int i = 0; i < a.n; i++) {
        result += (a.a[i][0] - y.a[i][0]) * (a.a[i][0] - y.a[i][0]);
    }
    return result;
}
Vector Sqrt_Cost_Func::d_sqrt_cost(const Vector &a, const Vector &y) {
    Vector result(a.n, 1);
    for (int i = 0; i < a.n; i++) {
        result.a[i][0] = 2 * (a.a[i][0] - y.a[i][0]);
    }
    return result;
}