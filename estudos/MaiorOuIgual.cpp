#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    long long a, b;

    std::cin >> a >> b;

    std::string result = (a >= b) ? "true" : "false";

    std::cout << result << std::endl;

    return 0;
}
