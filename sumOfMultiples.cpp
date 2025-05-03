// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: May 2nd, 2025
// This program displays all multiples of 3 or 5
// from 0 to 1000 and displays the sum of all numbers.
// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // The sum starts at 0
    int sum = 0;
    // for loop used to identify the range of numbers
    // from where it starts to where it ends
    for (int num = 0; num < 1000; num++) {
        // if the number is divided by 3 or 5 and has no remainder
        // displays the number
        if (num % 3 == 0 || num % 5 == 0) {
            std::cout << num << "\n";
            // sum = sum + number
            sum = sum + num;
        }
    }
    // displays the sum of the multiples of 3 or 5 below 1000.
    std::cout << "The sum of all multiples of 3 or 5 below 1000 is " << sum;
}
