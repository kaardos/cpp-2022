
#include "Matrix.h"
#include <iostream>

using namespace std;

int main() {
    Matrix m1(3,2);
    //m1.fillMatrix(10);
    m1.randomMatrix(1,10);
    cout<<"M1 matrix:"<<endl;
    m1.printMatrix();
    Matrix m2(2,3);
    m2.randomMatrix(1,10);
    cout<<"M2 matrix:"<<endl;
    m2.printMatrix();
    if(m1.isSquare())
    {
        cout<<"Square!";
    }
    else
    {
        cout<<"Not  square!";
    }
    cout<<endl<<"Sum:"<<endl;
    try{
        (m1+m2).printMatrix();
    }catch(out_of_range& exception){
        cout<<exception.what();
    }
    cout<<endl<<"Multiplied:"<<endl;
    try{
        (m1*m2).printMatrix();
    }catch(out_of_range& exception){
        cout<<exception.what();
    }
    return 0;
}