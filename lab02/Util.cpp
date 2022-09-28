
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

//9.esnel divid et imperat