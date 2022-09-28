#include "functions.h"
unsigned int countBits(unsigned int number)
{
    int counter = 0;
    while (number != 0){
        if((number&1)==1){
            ++counter;
        }
        number = number >>1;
    }
    return counter;
}
bool setBit(int& number, int order)
{

    if(order > 31)
    {
        return false;
    }
    else
    {
        int bit = 1;
        for(int i = 0; i < order; i++)
        {
            bit = bit << 1;
        }
        number = number | bit;
        return true;
    }
}
double mean(const double array[], int numElements)
{
    if(numElements == 0)
    {
        return NAN;
    }
    double mean = 0;
    for(int i = 0; i < numElements; i++)
    {
        mean = mean + array[i];
    }
    return mean/numElements;
}
double stddev(double array[], int numElements)
{
    if (numElements == 0) {
        return NAN;
    }

    double sum = 0;
    double average = mean(array, numElements);

    for (int i = 0; i < numElements; i++) {
        sum = sum + pow(array[i] - average, 2);
    }
    return sqrt(sum / numElements);
}
std::pair<double, double> max2(double array[], int numElements)
{
    std::pair<double, double> max;
    max.first = NAN;
    max.second = NAN;
    if(numElements == 0){
        return max;
    }
    if(numElements == 1){
        max.first = array[0];
        max.second = array[0];
        return max;
    }
    max.first = array[0];
    max.second = array[0];
    for(int i = 1; i < numElements; i++){
        if(array[i] > max.second)
        {
            max.first = max.second;
            max.second = array[i];
        }
        if(array[i] > max.first && array[i] < max.second)
        {
            max.first = array[i];
        }
    }
    return max;
}
int countWords(string text)
{
    int count = 1;
    for(int i = 0; i < text.length(); i++)
    {
        if(isspace(text[i]))
        {
            count++;
        }
    }
    return count;
}
