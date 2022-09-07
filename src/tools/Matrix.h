#ifndef MATRIX
#define MATRIX
#include "../global_config.h"
#include <cstring>
class Matrix {
public:
    std::vector<std::vector<long double> > a;
    int n, m;
    Matrix();
    Matrix(int n, int m);
    Matrix run(long double(* run)(long double x));
    Matrix operator + (const Matrix &b);
    Matrix operator * (const Matrix &b);
    Matrix operator * (const long double &a);
    void print() const;
    ~Matrix();
};
typedef Matrix Vector;
#endif