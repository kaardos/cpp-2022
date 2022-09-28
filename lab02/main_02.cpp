#include <iostream>
#include <fstream>
#include "Util.h"
#include "Point.h"
using namespace std;

void feladat3();
void feladat4();
void feladat5();
void feladat6();
int main(int argc, char** argv) {
    //feladat3();
    //feladat4();
    //feladat5();
    feladat6();
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
    /*
    int x,y;
    ifs>>x>>y;
    cout<<"x:"<<x<<"\ny:"<<y<<endl;
     */

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