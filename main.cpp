/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Coleman
 */

/*
* Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and
* complete. In other words, don’t just output yes or no. Your output should stand alone, like The value 4 is an even
* number. Hint: See the remainder (modulo) operator in §3.4.
*/

#include "std_lib_facilities.h"	

int main()
{
    try {
        // Initialize input first.
        int input = 0;
        cout << "Enter an integer to test for odd or even: ";
        cin >> input;
        // Catch any issues with the input integer.
        if (!cin) error("Please enter a valid integer to continue.");
        // If input can be divided by 2, it is even. Otherwise, odd.
        string answer = (input % 2) ? "odd" : "even";
        cout << "The integer " << input << " is " << answer << "!\n";
    } catch (runtime_error e) {
        // Catch any error messages that weren't caught directly.
        cout << e.what() << "\n";
    }

}