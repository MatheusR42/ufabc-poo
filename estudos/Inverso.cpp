#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string word;
    std::vector<std::string> reversedWords;

    // Loop para ler palavras até EOF (EOF = Ctrl+D)
    while (std::cin >> word) {
        std::reverse(word.begin(), word.end());
        reversedWords.push_back(word);
    }

    for (const auto& reversedWord : reversedWords) {
        std::cout << reversedWord << std::endl;
    }

    return 0;
}