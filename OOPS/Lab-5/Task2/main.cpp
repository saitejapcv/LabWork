#include "Number.h"
#include <iostream>

using namespace std;

void printNumbers(string title, const vector<int>& v) {
    cout << title << ": ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    cout << "--- Constructors ---" << endl;
    Number n1;
    Number n2(153);

    cout << "\n--- Checks ---" << endl;
    Number p(7);
    cout << "Is 7 prime? " << (p.isPrime() ? "Yes" : "No") << endl;

    Number perf(28);
    cout << "Is 28 perfect? " << (perf.isPerfect() ? "Yes" : "No") << endl;

    cout << "Is 153 Armstrong? " << (n2.isArmstrong() ? "Yes" : "No") << endl;

    Number ad(12);
    cout << "Is 12 Adam? " << (ad.isAdam() ? "Yes" : "No") << endl;

    Number fact(145);
    cout << "Is 145 Factorian? " << (fact.isFactorian() ? "Yes" : "No") << endl;

    Number niv(18);
    cout << "Is 18 Niven? " << (niv.isNiven() ? "Yes" : "No") << endl;

    cout << "\n--- Range Generation ---" << endl;
    printNumbers("Primes [1 to 30]", Number::generatePrimes(1, 30));
    printNumbers("Perfect [1 to 1000]", Number::generatePerfect(1, 1000));
    printNumbers("Armstrong [1 to 500]", Number::generateArmstrong(1, 500));
    printNumbers("Adam [1 to 50]", Number::generateAdam(1, 50));
    printNumbers("Factorians [1 to 1000]", Number::generateFactorians(1, 1000));
    printNumbers("Niven [1 to 30]", Number::generateNiven(1, 30));

    return 0;
}
