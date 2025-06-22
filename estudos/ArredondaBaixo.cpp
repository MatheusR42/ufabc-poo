#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a;
    
    std::cin >> a;
    
    std::cout << std::setprecision(4) << std::fixed << std::floor(a) << std::endl;

    return 0;
}