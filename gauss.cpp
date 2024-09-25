#include "matrix.h"
#include <iostream>

double product(Matrix A, Matrix B, Matrix C);

double product(Matrix A, Matrix B, Matrix C) {
    Matrix D = A*B*C;
    return D.Mat[0][0];
}