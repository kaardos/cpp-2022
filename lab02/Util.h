
#ifndef CPP_2022_UTIL_H
#define CPP_2022_UTIL_H
#include "Point.h"
#include <iostream>
#include <algorithm>
double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
Point* createArray(int numPoints);
void printArray(Point* points, int numPoints);
//std::pair<Point, Point> closestPoints(Point* points, int numPoints);
void sortPoints(Point* points, int numPoints);
void deletePoints(Point* points);
#endif //CPP_2022_UTIL_H
