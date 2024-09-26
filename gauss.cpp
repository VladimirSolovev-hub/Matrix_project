#include "matrix.h"
#include <iostream>

Matrix product(Matrix A, Matrix B, Matrix C);

Matrix product(Matrix A, Matrix B, Matrix C) {
    Matrix D = A + B + C;
    return D;
}

double gauss(Matrix D) {
    return D(0,0);
}