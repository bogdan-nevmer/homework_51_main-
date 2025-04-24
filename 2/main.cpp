#include "logic.h"

int main() {
    int base = 3;
    int testNumbers[] = { 1, 3, 9, 27, 81, 28, 80, 0, -1 }; 
    int size = sizeof(testNumbers) / sizeof(testNumbers[0]);

    std::cout << "Проверка, является ли число точной степенью " << base << ":\n";
    for (int i = 0; i < size; ++i) {
        std::cout << testNumbers[i] << ": "
            << (isPowerOf(base, testNumbers[i]) ? "да" : "нет") << "\n";
    }

    return 0;
}