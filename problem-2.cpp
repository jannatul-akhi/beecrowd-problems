#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& inputString) {
    std::stringstream ss(inputString);
    std::string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    std::string inputString;

    // Read the input string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Count the words
    int wordCount = countWords(inputString);

    // Output the result
    std::cout << "The string contains " << wordCount << " words." << std::endl;

    return 0;
}