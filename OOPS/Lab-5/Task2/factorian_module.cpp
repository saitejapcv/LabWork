#include "Number.h"

static int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

bool Number::checkFactorian(int n) {
    if (n <= 0) return false;
    int temp = n;
    int sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    return sum == n;
}

bool Number::isFactorian() {
    return checkFactorian(num);
}

std::vector<int> Number::generateFactorians(int start, int end) {
    std::vector<int> res;
    for (int i = start; i <= end; i++) {
        if (checkFactorian(i)) {
            res.push_back(i);
        }
    }
    return res;
}
