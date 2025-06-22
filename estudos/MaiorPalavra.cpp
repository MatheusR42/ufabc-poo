#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string word;
    std::string maiorPalavra;
    int maior = -1;
    
    // Loop para ler palavras até EOF (EOF = Ctrl+D)
    while (std::cin >> word) {
        if (maior == -1) {
            maiorPalavra = word;
            maior = word.size();
        } else if (word.size() > maior) {
            maiorPalavra = word;
            maior = word.size();
        }        
    }

    if (maior == -1) {
        std::cout << "Nenhuma palavra informada" << std::endl;
        return 0;
    }

    std::cout << "A maior palavra informada foi " << maiorPalavra << std::endl;

    return 0;
}