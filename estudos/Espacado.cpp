#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string word;
    std::vector<std::string> formattedWords;

    // Loop para ler palavras até EOF (EOF = Ctrl+D)
    while (std::cin >> word) {
        std::string spacedWord;
        for (size_t i = 0; i < word.size(); ++i) {
            spacedWord += word[i];
            if (i < word.size() - 1) {
                spacedWord += ' ';
            }
        }
        formattedWords.push_back(spacedWord);
    }

    for (const auto& formattedWord : formattedWords) {
        std::cout << formattedWord << std::endl;
    }

    return 0;
}