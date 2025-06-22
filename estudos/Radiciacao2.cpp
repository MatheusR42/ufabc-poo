#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    long long a, b;

    std::cin >> a >> b;

    std::cout << std::fixed << std::setprecision(4) << std::sqrt(a) << std::endl;

    return 0;
}
