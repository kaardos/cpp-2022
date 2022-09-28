#ifndef CPP_2022_FUNCTIONS_H
#define CPP_2022_FUNCTIONS_H

#include <cmath>
#include <sstream>
#include <string>
#include <utility>
using std::string;
unsigned int countBits(unsigned int n);
bool setBit(int& number, int order);
double mean(const double array[], int numElements);
double stddev(double array[], int numElements);
std::pair<double, double> max2(double array[], int numElements);
int countWords(string text);

#endif //CPP_2022_FUNCTIONS_H
