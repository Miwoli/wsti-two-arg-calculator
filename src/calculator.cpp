#include <iostream>
#include <utility>
#include "calculator.hpp"

void Calculator::calculate() {
    switch (operation) {
    case '+':
        result = args.first + args.second;
        break;
    
    case '-':
        result = args.first - args.second;
        break;

    case '*':
        result = args.first * args.second;
        break;

    case '/':
        result = args.first / args.second;
        break;

    default:
        std::cout << "Unknown operation" << std::endl;
        break;
    }
}

void Calculator::display() {
    std::cout << "Result: " << result << std::endl;
}