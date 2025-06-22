#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n;
    int nota;
    std::string result = "";

    while (std::cin >> n) {
        if (n == 0) {
            return 0;
        }

        int aux = 0;
        int maior = -1;
        int maiorIndex = -1;
        int secondIndex = -1;


        while (aux < n) {
            std::cin >> nota;
            if (maior == -1) {
                maior = nota;
                maiorIndex = aux;
                secondIndex = aux;
            } else if (nota > maior) {
                secondIndex = maiorIndex;
                maior = nota;
                maiorIndex = aux;
            }

            aux++;
        }

        std::cout << (secondIndex + 1) << std::endl;
    }

    return 0;
}
