#include "Number.h"
#include <iostream>

using namespace std;

Number::Number() {
    num = 0;
    cout << "Default constructor called for Number" << endl;
}

Number::Number(int n) {
    num = n;
    cout << "Parameterized constructor called for Number (" << num << ")" << endl;
}

Number::~Number() {
    cout << "Destructor called for Number (" << num << ")" << endl;
}

int Number::getNum() {
    return num;
}

void Number::setNum(int n) {
    num = n;
}
