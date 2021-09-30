// Copyright (c) Crestel Ong All rights reserved
//
// Created by: Crestel
// Created on: Sep 2021
// This factorial program

#include <iostream>
#include <string>

int main() {
    // this calculates the factorial of an integer
    std::string userInputAsString;
    int userInputAsInteger;
    int total = 1;
    int factorialNumber = 1;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInputAsString;

    // process and output
    try {
        // convert string to integer
        userInputAsInteger = std::stoi(userInputAsString);

        if (userInputAsInteger >= 0) {
            do {
                total = total * factorialNumber;
                factorialNumber += 1;
            } while (factorialNumber <= userInputAsInteger);
                std::cout << userInputAsString << "! is " << total
                << "." << std::fixed << std::endl;
        } else {
                std::cout << userInputAsString << " "
                << "is not a positive integer." << std::fixed << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << userInputAsString << "is an invalid input."
        << std::fixed << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
