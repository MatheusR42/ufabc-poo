#include <iostream>
#include <iomanip>

int main() {
    double a, b, c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    std::cout << std::setprecision(4) << std::fixed << c << std::endl;
    std::cout << std::setprecision(4) << std::fixed << b << std::endl;
    std::cout << std::setprecision(4) << std::fixed << a << std::endl;

    return 0;
}