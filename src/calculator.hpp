#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <iostream>
#include <utility>

class Calculator {
    std::pair<double, double> args;
    char operation;
    double result;

    public:

        Calculator(double f, double s, char o) {            
            args.first = f;
            args.second = s;
            operation = o;
        };

        void calculate();

        void display();        
};

#endif