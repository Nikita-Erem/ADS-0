//"Copyright 2024 Microsoft Corporation"
#include <iostream>
#include "alg.h"

int gcd(int, int);
int main() {
    std::cout << gcd(10, 15) << std::endl;
    return 0;
}
int gcd(int a, int b) {
    int max = (a > b) ? a : b;
    int y = 0;
    for (int i = 1; i < max; i++) {
        if ((a % i == 0) && (b % i == 0)) {
            y = i;
        }
    }
    return y;
}
