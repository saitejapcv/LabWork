#include "Number.h"

bool Number::checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool Number::isPrime() {
    return checkPrime(num);
}

std::vector<int> Number::generatePrimes(int start, int end) {
    std::vector<int> res;
    for (int i = start; i <= end; i++) {
        if (checkPrime(i)) {
            res.push_back(i);
        }
    }
    return res;
}
