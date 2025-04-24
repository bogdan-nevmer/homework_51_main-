#include "logic.h"


int sumOfDigits(int number) {
    int sum = 0;
    number = abs(number); 

    while (number > 0) {
        sum += number % 10; 
        number /= 10; 
    }

    return sum;
}