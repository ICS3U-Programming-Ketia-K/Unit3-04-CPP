// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec 12,  2021
// This program checks if the entered integer is positive, negative or just zero
#include <iostream>


int main() {
    int integer;

    // input
    // Get an integer from the user
    std::cout << "Please enter an integer: ";
    std::cin >> integer;

    // process
    // this function will give an output if one of the statements is true
    if (integer < 0) {
        // output
        std::cout << "This number is a negative number";
    } else if (integer > 0) {
        std::cout << "This number is a positive number ";
    } else if (integer == 0) {
        std::cout << "This number is zero! ";
    }
}
