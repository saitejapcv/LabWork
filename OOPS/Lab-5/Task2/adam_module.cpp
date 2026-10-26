#include "Number.h"

static int reverseDigits(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

bool Number::checkAdam(int n) {
    if (n < 0) return false;
    int sq1 = n * n;
    int rev = reverseDigits(n);
    int sq2 = rev * rev;
    return reverseDigits(sq1) == sq2;
}

bool Number::isAdam() {
    return checkAdam(num);
}

std::vector<int> Number::generateAdam(int start, int end) {
    std::vector<int> res;
    for (int i = start; i <= end; i++) {
        if (checkAdam(i)) {
            res.push_back(i);
        }
    }
    return res;
}
