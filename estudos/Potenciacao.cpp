#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int a,b;
    
    std::cin >> a >> b;
    
    std::cout << std::setprecision(4) << std::fixed << std::pow(a, b) << std::endl;

    return 0;
}