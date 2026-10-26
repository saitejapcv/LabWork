#include "Number.h"

bool Number::checkPerfect(int n) {
    if (n <= 1) return false;
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

bool Number::isPerfect() {
    return checkPerfect(num);
}

std::vector<int> Number::generatePerfect(int start, int end) {
    std::vector<int> res;
    for (int i = start; i <= end; i++) {
        if (checkPerfect(i)) {
            res.push_back(i);
        }
    }
    return res;
}
