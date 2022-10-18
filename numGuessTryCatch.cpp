// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 17, 2022
// This program asks for a number
// between 0 and 9, and tells you
// if your guess is correct

#include <time.h>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <random>

main() {
    // Declaring variables
    std::string userGuessString;
    int userGuess, correctGuess;

    // initializing random seed
    std::random_device rseed;

    std::mt19937 rgen(rseed());

    // initializing random number code
    std::uniform_int_distribution<int> idist(0, 9);

    // making random number variable
    correctGuess = idist(rgen);

    // Input
    std::cout << "This program asks for a number\n";
    std::cout << "between 0 and 9, and then tells\n";
    std::cout << "you if your guess is correct\n";
    std::cout << "\n";
    std::cout << "Enter a number between 1 and 9: ";
    std::cin >> userGuessString;

    // Process
    // Checking that userNum is an integer
    try {
        userGuess = std::stoi(userGuessString);
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number.";
        std::cout << userGuess << " ";
        std::cout << " is not valid.\n";
    }

    // Checking that userNum is in the right range
    if (userGuess > 9) {
        std::cout << "Please enter a valid number. ";
        std::cout << userGuess << " is not valid.";
    } else if (userGuess < 0) {
        std::cout << "Please enter a valid number. ";
        std::cout << userGuess;
        std::cout << " is not valid.";
    } else {
        std::cout << "Your input is valid.";
    }

    // Checking to see if userGuess is correct
    if (userGuess == correctGuess) {
        // output
        std::cout << "Your guess is correct!";
    } else {
        std::cout << "Your guess is incorrect.";
        std::cout << "The correct number was ";
        std::cout << correctGuess << ".\endl";
    }
}
