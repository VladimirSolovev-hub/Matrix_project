#include <gtest/gtest.h>

#include "matrix.h"
double gauss(Matrix D);


TEST(matrix, simple) {
    Matrix mat1(2, 2);
    mat1(0, 0) = 1; mat1(0, 1) = 2;
    mat1(1, 0) = 3; mat1(1, 1) = 4;
    
    EXPECT_NEAR(gauss(mat1), 1, 1e-7);
}