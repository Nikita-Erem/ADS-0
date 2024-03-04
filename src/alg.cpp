// Copyright 2022 NNTU-CS
#include <cstdint>
#include <iostream>
#include "alg.h"


bool checkPrime(uint64_t value) {
for (uint64_t j = 2; j < value; j++) {
        if (value % j == 0) {
            return false;
        }
    }
    return true;
}
}

uint64_t nPrime(uint64_t n) {
    int ccc = 0;
    int number = 2;
    while (ccc < n) {
        if (isPrime(number)) {
            ccc++;
        }
        number++;
    }
    return number - 1;
}

uint64_t nextPrime(uint64_t value) {
    if (value <= 1) return 0;
    value++;
    while (!checkPrime(value)) {
        value++;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t summ = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            summ += i;
        }
    }
    return summ;
}
