#include <iostream>
#include <utility>
#include "calculator.hpp"

int main(int argc, char** argv) {
    std::cout << "Two arguments calculator" << std::endl;

    double first_arg;
    double second_arg;
    char operation_char;

    std::cout << "First argument: ";
    std::cin >> first_arg;
    std::cout << "Operation char: ";
    std::cin >> operation_char;
    std::cout << "Second argument: ";
    std::cin >> second_arg;

    while (operation_char == '/' && second_arg == 0) {
        std::cout << "The universe does not allow us to divide by 0. Please try something else" << std::endl;

        std::cout << "Operation char: ";
        std::cin >> operation_char;
        std::cout << "Second argument: ";
        std::cin >> second_arg;
    }

    Calculator calculator(first_arg, second_arg, operation_char);

    calculator.calculate();
    calculator.display();

    std::getchar();
    return 0;
}