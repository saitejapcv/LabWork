#include "Number.h"

bool Number::checkNiven(int n) {
    if (n <= 0) return false;
    int temp = n;
    int sum = 0;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return (n % sum == 0);
}

bool Number::isNiven() {
    return checkNiven(num);
}

std::vector<int> Number::generateNiven(int start, int end) {
    std::vector<int> res;
    for (int i = start; i <= end; i++) {
        if (checkNiven(i)) {
            res.push_back(i);
        }
    }
    return res;
}
