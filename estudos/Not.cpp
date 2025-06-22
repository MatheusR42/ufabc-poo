#include <iostream>
#include <string>

int main() {
    std::string input1, input2;
    std::cin >> input1;

    bool a = (input1 == "true");

    std::string result = !a ? "true" : "false";
    std::cout << result << std::endl;

    return 0;
}