#include <iostream>
#include <iomanip>

int main() {
    double a, b, c;
    
    std::cin >> a >> b >> c;
    
    std::cout << std::setprecision(4) << std::fixed << c << " ";
    std::cout << std::setprecision(4) << std::fixed << b << " ";
    std::cout << std::setprecision(4) << std::fixed << a << std::endl;

    return 0;
}