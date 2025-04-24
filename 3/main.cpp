#include "logic.h"
int main() {
    
    int num1 = 27306;
    int num2 = 829374;

    cout << "Максимальная цифра в " << num1 << " : " << find_max_digit(num1) << endl;
    cout << "Максимальная цифра в " << num2 << " : " << find_max_digit(num2) << endl;

    int num3 = -12345;
    int num4 = 0;

    cout << "Максимальная цифра в " << num3 << " : " << find_max_digit(num3) << endl;
    cout << "Максимальная цифра в " << num4 << " : " << find_max_digit(num4) << endl;

    return 0;
}