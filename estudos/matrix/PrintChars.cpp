#include <iostream>
#include <string>

int main() {
    // Prompt the user for input
    std::cout << "Enter a string: ";

    // Declare a string variable to store the input
    std::string input;

    // Read an entire line of text from the user
    std::getline(std::cin, input);

    // Print each character on a new line using a range-based for loop
    for (char c : input) {
        std::cout << c << std::endl;
    }

    return 0;
}