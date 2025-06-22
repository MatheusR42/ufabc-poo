#include <iostream>
#include <iomanip>

int main() {
    float a, b, c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    std::cout << std::setprecision(2) << std::fixed << c << std::endl;
    std::cout << std::setprecision(2) << std::fixed << b << std::endl;
    std::cout << std::setprecision(2) << std::fixed << a << std::endl;

    return 0;
}