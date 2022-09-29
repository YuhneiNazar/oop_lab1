
#include <iostream>
#include "line.h"
using namespace std;

Line makeLine(double first, double second) {
    Line p;
    if (!p.Init(first, second)){
        cout << "Wrong arguments to Init!" << endl;
        exit(1);
    }
    return p;
}

int main() {

    Line p;
    p.SetFirst(9.5);
    p.SetSecond(3.10);
    p.Read();
    p.root();
    p.Display();
    return 0;
}