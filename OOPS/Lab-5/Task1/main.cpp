#include "Matrix.h"
#include <iostream>

using namespace std;

int main() {
    cout << "--- Default Constructor ---" << endl;
    Matrix m1;
    m1.display();

    cout << "\n--- Parameterized Constructor ---" << endl;
    Matrix m2(2, 2);
    m2.setElement(0, 0, 1);
    m2.setElement(0, 1, 2);
    m2.setElement(1, 0, 3);
    m2.setElement(1, 1, 4);

    Matrix m3(2, 2);
    m3.setElement(0, 0, 5);
    m3.setElement(0, 1, 6);
    m3.setElement(1, 0, 7);
    m3.setElement(1, 1, 8);

    cout << "Matrix 1:" << endl;
    m2.display();
    cout << "Matrix 2:" << endl;
    m3.display();

    cout << "\nAddition:" << endl;
    Matrix m4 = m2.add(m3);
    m4.display();

    cout << "\nSubtraction:" << endl;
    Matrix m5 = m2.subtract(m3);
    m5.display();

    cout << "\nMultiplication:" << endl;
    Matrix m6 = m2.multiply(m3);
    m6.display();

    cout << "\nTranspose of Matrix 1:" << endl;
    Matrix m7 = m2.transpose();
    m7.display();

    return 0;
}
