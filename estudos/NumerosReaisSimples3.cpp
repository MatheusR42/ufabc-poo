#include <iostream>
#include <iomanip>

int main() {
    float a, b, c;
    
    std::cin >> a >> b >> c;
    
    std::cout << std::setprecision(2) << std::fixed << a << " ";
    std::cout << std::setprecision(2) << std::fixed << b << " ";
    std::cout << std::setprecision(2) << std::fixed << c << std::endl;

    return 0;
}