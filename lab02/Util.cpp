
#include "Util.h"
#include <cmath>
double distance(const Point &a, const Point &b) {
    return sqrt(pow(b.getX()-a.getX(),2) + pow(a.getY()-b.getY(),2) );
}

int distSq(Point p, Point q)
{
    return (p.getX() - q.getX()) * (p.getX() - q.getX()) + (p.getY() - q.getY()) * (p.getY() - q.getY());
}

bool isSquare(const Point &a, const Point &b, const Point &c, const Point &d) {
    int d2 = distSq(a, b); // from p1 to p2
    int d3 = distSq(a, c); // from p1 to p3
    int d4 = distSq(a, d); // from p1 to p4

    if (d2 == 0 || d3 == 0 || d4 == 0)
        return false;

    if (d2 == d3 && 2 * d2 == d4
        && 2 * distSq(b, d) == distSq(b, c)) {
        return true;
    }

    if (d3 == d4 && 2 * d3 == d2
        && 2 * distSq(c, b) == distSq(c, d)) {
        return true;
    }
    if (d2 == d4 && 2 * d2 == d3
        && 2 * distSq(b, c) == distSq(b, d)) {
        return true;
    }

    return false;
}
Point* createArray(int numPoints){
    Point * points = new Point[numPoints];
    srand(time(0));
    for(int i = 0; i < numPoints; ++i){
        points[i] = Point(rand() % 2000, rand() % 2000);
    }
    return points;
}

void printArray(Point* points, int numPoints){
    for(int i = 0; i < numPoints; ++i){
        std::cout<<"Pont: "<<i+1<<std::endl;
        points[i].print();
        std::cout<<std::endl;
    }
}

void sortPoints(Point* points, int numPoints){
    std::sort (points, points+numPoints);
}
void deletePoints(Point* points){
    delete[] points;
}