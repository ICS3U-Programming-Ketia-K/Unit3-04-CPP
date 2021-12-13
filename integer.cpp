// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec 12,  2021
// This program checks if the entered integer is positive, negative or just zero
#include <iostream>


int main() {
    int integer;

    // Get an integer from the user
    std::cout << "Please enter an integer: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // The program receives the integer and compare to the statements
    if (integer < 0) {
        // Then, it gives the output based on the statement that is true!
        std::cout << "This number is a negative number";
    } else if (integer > 0) {
        std::cout << "This number is a positive number ";
    } else {
        std::cout << "This number is just zero! ";
    }
}
