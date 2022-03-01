// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cstdint>

int64_t power(int64_t x, uint16_t n) {
    int result = 1;
    int i;
    for(i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
