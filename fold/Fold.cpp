#include <iostream>

const unsigned int MAX_TABLE_NUMBER = 11;
const unsigned int TABLE_ITEM_LENGTH = 6;

using std::cout;
using std::endl;

/**
 * @brief Get the number of digits of a positive number
 *
 * @param num       [IN]    The number
 * @return the number of digits of num
 */
unsigned int getNumOfDigits(unsigned int num) {
    unsigned int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

/**
 * @brief Print a number of whitespaces
 *
 * @param spaces    [IN]    Number of whitespaces to print
 */
void printSpaces(unsigned int spaces) {
    unsigned int i = 0;
    for (i = 0; i < spaces; i++) {
        cout << " ";
    }
}

int main() {
    unsigned int i = 1;
    unsigned int j = 1;
    unsigned int currentNumber = 0;
    unsigned int currentDigits = 0;

    for (i = 1; i <= MAX_TABLE_NUMBER; i++) {
        for (j = 1; j < MAX_TABLE_NUMBER; j++) {
            currentNumber = i * j;
            currentDigits = getNumOfDigits(currentNumber);
            cout << currentNumber;
            printSpaces(TABLE_ITEM_LENGTH - currentDigits);
        }
        currentNumber = i * MAX_TABLE_NUMBER;
        cout << currentNumber << endl;
    }

    return 0;
}