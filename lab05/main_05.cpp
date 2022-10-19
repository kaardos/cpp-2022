
#include "Matrix.h"
#include <iostream>

using namespace std;

int main() {
    Matrix m1(4,5);
    //m1.fillMatrix(10);
    m1.randomMatrix(500,2000);
    m1.printMatrix();
    if(m1.isSquare())
    {
        cout<<"Square!";
    }
    else
    {
        cout<<"Not  square!";
    }
    return 0;
}