#include <iostream>
#include <iomanip>

int main() {
    float a,b;
    
    std::cin >> a >> b;
    
    float c = a / b;

    std::cout << std::setprecision(4) << std::fixed << c << std::endl;

    return 0;
}