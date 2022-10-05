#include <iostream>
#include <fstream>
#include "Util.h"
#include "Point.h"
using namespace std;

void feladat3();
void feladat4();
void feladat5();
void feladat6();
void feladat7();
void feladat8();
void feladat9();
void feladat10();
void feladat11();
void feladat12();
int main(int argc, char** argv) {
    //feladat3();
    //feladat4();
    //feladat5();
    //feladat6();
    //feladat7();
    //feladat8();
    //feladat9();
    //feladat10();
    //feladat11();
    feladat12();
    return 0;
}

void feladat3(){
    Point *pp1 = new Point(300,400);
    pp1->print();
}

void feladat4(){
    Point *pp1 = new Point(300,400);
    Point *pp2 = new Point(0, 0);
    cout<<"A ket pont kozti tavolsag: "<<distance(pp1,pp2)<<endl;
}
void feladat5(){
    Point a = { 20, 10 }, b = { 10, 20 },
            c = { 20, 20 }, d = { 10, 10 };
    isSquare(a, b, c, d) ? cout << "Yes" : cout << "No";
}
void feladat6(){
    ifstream ifs("be.txt");
    if(!ifs)
    {
        cout<<"File open error"<<endl;
    }

    int x,y;
    while(!ifs.eof())
    {
        ifs>>x>>y;
        Point a(x,y);
        ifs>>x>>y;
        Point b(x,y);
        ifs>>x>>y;
        Point c(x,y);
        ifs>>x>>y;
        Point d(x,y);
    }
}
void feladat7(){
    int n = 10;
    Point * array = createArray(n);
    for(int i = 0; i < n; ++i){
        cout<<"Pont:"<<i+1;
        array[i].print();
        cout<<endl;
    }
}
void feladat8()
{
    int n = 10;
    Point * array = createArray(n);
    printArray(array,n);
}
/*void feladat9()
{

}
void feladat10()
{

}*/
void feladat11()
{
    int n = 10;
    Point * array = createArray(n);
    sortPoints(array,n);
    printArray(array,n);

}
void feladat12()
{
    int n = 10;
    Point * array = createArray(n);
    deletePoints(array);
    if(!array)
    {
        cout<<"Array deleted";
    }
}