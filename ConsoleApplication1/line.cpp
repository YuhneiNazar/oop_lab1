#include "line.h"
#include <iostream>
using namespace std;
void Line::SetFirst(double value)
{
    first = value;
}

void Line::SetSecond(double value)
{
    second = value;
}

bool Line::Init(double f, double s) 
{
    if (f > 0 && s > 0) {
        first = f;
        second = s;
        return true;
    }

    return false;

}

void Line::Read() {
    cout << "A=";
    cin >> first;
    cout << "B=";
    cin >> second;
}

double Line::root() {
    if (first == 0) {
        cout << "incorrect data coefficient A";
        exit(1);
    }
    else
    {
        return sqrt(first * first + second * second);
    }
}
void Line::Display() {
    cout << "y=" << root();
}