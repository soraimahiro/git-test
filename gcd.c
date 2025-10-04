#include "gcd.h"

int32_t gcd(int32_t a, int32_t b){
    if(b == 0) return a;
    return gcd(b, a % b);
}