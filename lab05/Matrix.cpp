//
// Created by kardos on 19.10.2022.
//
#include "Matrix.h"
#include <iostream>
#include <random>

using namespace std;

Matrix::Matrix(int mRows, int mCols):mRows(mRows),mCols(mCols)
{
    mElements = new double*[mRows];
    for(int i = 0; i < mRows; ++i){
        mElements[i] = new double [mCols];
    }
}
Matrix::Matrix(const Matrix& what)
{
    mRows = what.mRows;
    mCols = what.mCols;
    mElements = new double* [mRows];
    for(int i = 0; i < mRows; ++i){
        mElements[i] = new double[mCols];
    }

}
Matrix::Matrix(Matrix&& what)
{
    mRows = what.mRows;
    mCols = what.mCols;
    mElements = what.mElements;
    what.mRows = 0;
    what.mCols = 0;
    what.mElements = nullptr;
}
Matrix::~Matrix()
{
    if(mElements != nullptr){
        delete[] mElements;
        mElements = nullptr;
        mRows = 0;
        mCols = 0;
    }
}
void Matrix::fillMatrix(double value)
{
    for(int i = 0; i < mRows; ++i){
        for(int j = 0; j < mCols; ++j){
            mElements[i][j] = value;
        }
    }
}

void Matrix::randomMatrix(int a, int b) {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(a, b);
    for(int i = 0; i < mRows; ++i){
        for(int j = 0; j < mCols; ++j){
            mElements[i][j] = dist(mt);
        }
    }
}
void Matrix::printMatrix(std::ostream &os) const
{
    for(int i = 0; i < mRows; ++i){
        for(int j = 0; j < mCols; ++j){
            os << " " <<mElements[i][j];
        }
        os << endl;
    }
}
bool Matrix::isSquare() const {
    if(getCols() == getRows()){
        return true;
    }
    return false;
}
