#include "logic.h"

int find_max_digit(int N) {
   
    if (N < 0) {
        N = -N;
    }

    int maxDigit = 0; 

    
    while (N > 0) {
        int digit = N % 10; 
        if (digit > maxDigit) {
            maxDigit = digit; 
        }
        N /= 10; 
    }

    return maxDigit;
}
