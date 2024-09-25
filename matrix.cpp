#include "matrix.h"
#include <iostream>


Matrix product(Matrix A, Matrix B, Matrix C);

int main() {
    Matrix mat1(2, 2);
    mat1(0, 0) = 1; mat1(0, 1) = 2;
    mat1(1, 0) = 3; mat1(1, 1) = 4;

    Matrix mat2(2, 2);
    mat2(0, 0) = 5; mat2(0, 1) = 6;
    mat2(1, 0) = 7; mat2(1, 1) = 8;

    Matrix mat5(2, 3);
    mat5(0, 0) = 5; mat5(0, 1) = 6; mat5(0,2) = 10;
    mat5(1, 0) = 7; mat5(1, 1) = 8; mat5(1,2) = 100;

    Matrix m3 = mat1 + mat2;
    std::cout << "This is Matrix m3:" << std::endl;
    m3.printMatrix();

    Matrix m4 = mat1 * mat2;
    std::cout << "This is Matrix m4:" << std::endl;
    m4.printMatrix();

    Matrix m6 = mat5.transposition();

    std::cout << "This is Matrix m6:" << std::endl;
    m6.printMatrix();
    Matrix C = product(m3, m4, mat1);

    std::cout << "This is matrix C" << std::endl;
    C.printMatrix();
    return 0;

}


