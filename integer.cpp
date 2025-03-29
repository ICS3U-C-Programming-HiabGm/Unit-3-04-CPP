// Created by: Hiab G
// Created on: March 10th
// Program Description: Checks if a number is positive, negative, or zero

#include <iostream> 

int main() { 
    int integer; 

    // Input 
    std::cout << "Enter an integer: "; // Prompt user for input
    std::cin >> integer; // Store user input in 'integer' variable
    std::cout << std::endl; // Print a blank line for formatting

    // Processes and output
    // Check if number is positive (> 0)
    if (integer > 0) { 
        std::cout << integer << " is positive!" << std::endl;
    }
    // If not positive, check if negative (< 0)
    else if (integer < 0) {
        std::cout << integer << " is negative!" << std::endl;
    }
    // If neither positive nor negative, it must be zero
    else {
        std::cout << integer << " is just Zero!" << std::endl;
    }

return 0; 
}