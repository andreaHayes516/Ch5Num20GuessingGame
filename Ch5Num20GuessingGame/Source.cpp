/************************************************
** Author: Andrea Hayes
** Date: March 20, 2020
** Purpose: Create a guessing number game
** Input: Random number, guess
** Processing: Loop for if number is higher or lower
** Output: Random number guessing game
*************************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    unsigned seed = time(0); 

    srand(seed);  // Seeds number generator

    const int MIN_VALUE = 1; // Minimum value for number
    const int MAX_VALUE = 999; // Maximum value for number
    int number, guess = 0;

    number = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; // Formula for random number

    do  // Loop for game
    {
        cout << "Guess a number between 1 and 999: ";  // Input for user guess
        cin >> guess;

        if (guess < number)  // If number is too low
            cout << "The number is higher. Please guess again." << endl;
        else if (guess > number)  // If number is too high
        cout << "The number is lower. Please guess again." << endl;
        else   // If number is correct
            cout << "CONGRATS! YOU WIN!" << endl;
    } while (guess != number);

    return 0;
}