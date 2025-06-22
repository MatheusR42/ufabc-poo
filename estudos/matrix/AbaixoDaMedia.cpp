#include <iostream>
#include <iomanip>

double mean(double * v, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += v[i];
    }

    return sum / size;
}

int main() {
    int n;
    std::cin >> n;
    
    double grades[3][n];

    for (int i = 0; i < n; i++) {
        std::cin >> grades[0][i];
        std::cin >> grades[1][i];
        std::cin >> grades[2][i];
    }

    for (int i = 0; i < 3; i++) {
        double m = mean(grades[i], n);
        int qtdBellowMean = 0;

        for (int j = 0; j < n; j++) {
            if (grades[i][j] < m) {
                qtdBellowMean++;
            }
        }

        std::cout << "Na " << (i+1) << "a. atividade " << qtdBellowMean << " alunos tiveram nota abaixo da media." << std::endl;
    }
}