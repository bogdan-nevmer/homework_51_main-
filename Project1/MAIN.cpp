#include "logic.h"
int main() {
    int userInput;

   
    cout << "input number ";
    cin >> userInput;


    int result = sumOfDigits(userInput);

    cout << "sum number" << userInput << " = " << result << endl;

    return 0;
}