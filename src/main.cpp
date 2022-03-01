// Copyright 2022 UNN-IASR
#include "fun.h"
#include "fun.cpp"

using namespace std;

int main() {
    int64_t x;
    uint16_t n;
    cout << "Enter args:\n";
    cin >> x;
    cin >> n;
    power(x, n);
    return 0;
}
