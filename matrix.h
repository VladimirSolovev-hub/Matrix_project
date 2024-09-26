#pragma once

#include <cmath>
#include <cassert>
#include <iostream>
#include <vector>



class Matrix {

public:
    unsigned lin;
    unsigned col;
    std::vector <std::vector<double> > Mat;
    Matrix(unsigned l, unsigned c) : lin(l), col(c), Mat(l, std::vector<double>(c)) {}

    // Matrix(unsigned l, unsigned c, std::vector <std::vector<double> > M(l, std::vector<double>(c))) :
    //     lin(l), col(c), 
        


    double& operator() (int i, int j) {return Mat[i][j];}

    void printMatrix () const {
        for(unsigned i = 0; i < lin;i++) {
            for (unsigned j = 0; j < col; j++) {
                std::cout << Mat[i][j] << "  ";
            }
            std::cout << std::endl;
        }
    }

    Matrix operator+(const Matrix& M) const {
        assert(lin == M.lin && col == M.col);
        Matrix result(lin, col);
        for(unsigned i =0; i < lin; i++) {
            for(unsigned j = 0; j < col; j++) {
                result(i,j) = Mat[i][j] + M.Mat[i][j];
            }
        }
        return result;
    }
    Matrix& operator=(const Matrix& other) {
        for(unsigned i =0; i < lin; i++) {
            for(unsigned j = 0; j < col; j++) {
                Mat[i][j] = other.Mat[i][j];
            }
        }
        return *this;
    }
    Matrix operator*(const Matrix& M) const {
        assert(col == M.lin);
        Matrix result (lin, M.col);
        for(unsigned i =0; i < lin; i++) {
            for(unsigned k = 0; k < M.col; k++) {
                result(i,k) = 0.;
                for(unsigned j = 0; j < col; j++) {
                    result(i,k) += Mat[i][j]*Mat[j][k];
                }
            }
        }
        return result;
    }

    Matrix transposition() const {
        Matrix M(col, lin);
        for(unsigned i = 0; i < col; i++) {
            for(unsigned j = 0; j < lin; j++) {
                M.Mat[i][j] = Mat[j][i];
            }
        }
        return M;
    }

};

Matrix product(Matrix A, Matrix B, Matrix C);

double gauss(Matrix D);