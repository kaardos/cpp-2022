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
Matrix operator+(const Matrix& x, const Matrix& y){
    if((x.mRows != y.mRows)&&(x.mCols != y.mCols)){
        throw out_of_range("Out of range!");
    }
    Matrix uj(x.mRows,x.mCols);
    for(int i = 0; i < uj.getRows(); ++i){
        for(int j = 0; j < uj.getCols(); j++){
            uj.mElements[i][j] = x.mElements[i][j] + y.mElements[i][j];
        }
    }
    return uj;

}
Matrix operator*(const Matrix& x, const Matrix& y){
    if(x.mCols != y.mRows){
        throw out_of_range("Out of range!");
    }
    Matrix uj(x.mRows,y.mCols);
    for(int i = 0; i < uj.getRows(); ++i){
        for(int j = 0; j < uj.getCols(); j++){
            double sum = 0;
            for(int k = 0; k < x.mCols; ++k){
                sum += x.mElements[i][k] * y.mElements[k][j];
            }
            uj.mElements[i][j] = sum;
        }
    }
    return uj;
}
