#include "Number.h"

static int power(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

bool Number::checkArmstrong(int n) {
    if (n < 0) return false;
    int temp = n;
    int count = 0;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    if (count == 0) count = 1;

    temp = n;
    int sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        sum += power(rem, count);
        temp /= 10;
    }
    return sum == n;
}

bool Number::isArmstrong() {
    return checkArmstrong(num);
}

std::vector<int> Number::generateArmstrong(int start, int end) {
    std::vector<int> res;
    for (int i = start; i <= end; i++) {
        if (checkArmstrong(i)) {
            res.push_back(i);
        }
    }
    return res;
}
