#include "Matrix.h"
#include <cstdio>
Matrix::Matrix() {
    n = m = 0;
}
Matrix::Matrix(int n, int m) {
    for (int i = 0; i < n; i++) {
        a.push_back(std::vector<long double>(m, 0));
        // memset(a[i], 0x0, sizeof(double) * m);
    }
    this->n = n;
    this->m = m;
    return;
}
Matrix::~Matrix() {}
Matrix Matrix::operator * (const Matrix &o) {
    if (m != o.n) throw "Matrix operation error.";
    Matrix res(n, o.m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < o.m; j++) {
            res.a[i][j] = 0;
            for (int k = 0; k < m; k++)
                res.a[i][j] += a[i][k] * o.a[k][j];
        }
    return res;
}
Matrix Matrix::operator + (const Matrix &o) {
    if (o.n != n || o.m != m) {
        throw "Matrix operation error.";
    }
    Matrix res(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res.a[i][j]  = a[i][j] + o.a[i][j];
    return res;
}
Matrix Matrix::operator * (const long double &k) {
    Matrix res(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res.a[i][j] = a[i][j] * k;
    return res;
}
Matrix Matrix::run(long double (*run)(long double x) ) {
    Matrix res(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res.a[i][j] = run(a[i][j]);
    return res;
}
void Matrix::print() const {
    for (int i = 0; i < n; i++) {
        if (i == 0) printf("[");
        else printf(" ");
        for (int j = 0; j < m; j++) {
            printf("%7.2lf ", (double)a[i][j]);
        }
        if (i == n-1) printf("]");
        puts("");
    }
}