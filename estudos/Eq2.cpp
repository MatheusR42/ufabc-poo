#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a,b,c;
    
    std::cin >> a >> b >> c;
    
    double delta = (b*b) - 4*a*c;

    double x1 = ( (-1)*b + std::sqrt(delta) ) / (2*a);
    double x2 = ( (-1)*b - std::sqrt(delta) ) / (2*a);
    
    // x = (-b ± √(b² - 4ac)) / 2a
    
    std::cout << std::setprecision(4) << std::fixed << x1 << " ";
    std::cout << std::setprecision(4) << std::fixed << x2 << std::endl;

    return 0;
}