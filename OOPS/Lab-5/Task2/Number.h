#ifndef NUMBER_H
#define NUMBER_H

#include <vector>

class Number {
private:
    int num;

public:
    Number();
    Number(int n);
    ~Number();

    int getNum();
    void setNum(int n);

    bool isPrime();
    static bool checkPrime(int n);
    static std::vector<int> generatePrimes(int start, int end);

    bool isPerfect();
    static bool checkPerfect(int n);
    static std::vector<int> generatePerfect(int start, int end);

    bool isArmstrong();
    static bool checkArmstrong(int n);
    static std::vector<int> generateArmstrong(int start, int end);

    bool isAdam();
    static bool checkAdam(int n);
    static std::vector<int> generateAdam(int start, int end);

    bool isFactorian();
    static bool checkFactorian(int n);
    static std::vector<int> generateFactorians(int start, int end);

    bool isNiven();
    static bool checkNiven(int n);
    static std::vector<int> generateNiven(int start, int end);
};

#endif
