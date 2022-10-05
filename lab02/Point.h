
#ifndef CPP_2022_POINT_H
#define CPP_2022_POINT_H

#include <ctime>
#include <cstdlib>

class Point{
private:
    int x, y;
public:
    Point( int x=0, int y=0);
    int getX() const;
    int getY() const;
    void print() const;
    bool operator < (const Point& p1) const{
        return ( x ) < p1.x;
    }
};

#endif //CPP_2022_POINT_H
