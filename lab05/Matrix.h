//
// Created by kardos on 19.10.2022.
//

#ifndef CPP_2022_MATRIX_H
#define CPP_2022_MATRIX_H
#include <iostream>
#include <stdexcept>
using namespace std;
class Matrix {
public:
//Methods
// Default constructor
    Matrix( int mRows = 10, int mCols =10);
// Copy constructor
    Matrix(const Matrix& what);
// Move constructor
    Matrix( Matrix&& what );
// Destructor
    ~Matrix();
//fills the matrix with identical elements
    void fillMatrix(double value);
//fills the matrix with random real numbers in the range [a, b)
    void randomMatrix(int a, int b); //fills
//prints the matrix
    void printMatrix(ostream& os = cout) const;
    bool isSquare() const;
    int getRows() const { return this->mRows;}
    int getCols() const { return this->mCols;}
// operation is permitted on matrices having the same dimensions
// otherwise throws an out_of_range exception!!
    friend Matrix operator+(const Matrix& x, const Matrix& y);
// operation is permitted on matrices having proper dimensions
// otherwise throws an out_of_range exception!!
    friend Matrix operator*(const Matrix& x, const Matrix& y);
private:
//Data
    double ** mElements;
    int mRows; //number of rows
    int mCols; //number of columns
};
Matrix operator+(const Matrix& x, const Matrix& y){
    //try{
        if((x.mRows != y.mRows)&&(x.mCols != y.mCols)){
            throw out_of_range("Out of range!");
        }


    //}catch(out_of_range& exception){
    //    cout<<exception.what() <<
    //}
    //try catch majd a main-be


}
#endif //CPP_2022_MATRIX_H
