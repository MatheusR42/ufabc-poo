#include <iostream>
#include <string>

int main() {
    std::string input1, input2;
    std::cin >> input1 >> input2;

    bool a = (input1 == "true");
    bool b = (input2 == "true");

    std::string result = (a && b) ? "true" : "false";
    std::cout << result << std::endl;

    return 0;
}