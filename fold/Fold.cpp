#include <iostream>

#define MAX_TABLE_NUMBER (11)
#define TABLE_ITEM_LENGTH (6)

using std::cout;
using std::endl;

/**
 * Get the number of digits of a positive number
 * 
 * @param num       [IN]    The number
 * @return the number of digits of num
 */
int getNumOfDigits(int num) {
    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

/**
 * Print a number of whitespaces
 * 
 * @param spaces    [IN]    Number of whitespaces to print
 */
void printSpaces(int spaces) {
    int i = 0;
    for (i = 0; i < spaces; i++) {
        cout << " ";
    }
}

int main()
{
    int i = 1;
    int j = 1;
    int current_number = 0;
    int current_digits = 0;
    
    for (i = 1; i < MAX_TABLE_NUMBER + 1; i++) {
        for (j = 1; j < MAX_TABLE_NUMBER; j++) {
            current_number = i * j;
            current_digits = getNumOfDigits(current_number);
            cout << current_number;
            printSpaces(TABLE_ITEM_LENGTH - current_digits);
        }
        current_number = i * MAX_TABLE_NUMBER;
        cout << current_number << endl;
    }

    return 0;
}