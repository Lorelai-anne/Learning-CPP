// Simple Calculator
// This program contains a main function
// The calculator can multiply, divide, subtract, and add two numbers to each other with an option continue
//

#include <iostream>
#include <string>
#include <cfloat>

double calculate(double num1, double num2, char symbol);

int main()
{
    double num1, num2;
    char symbol;
    double result = 0;

    std::string userContinue = "y";

    while (userContinue == "y" || userContinue == "Y" || userContinue == "yes" || userContinue == "Yes") { //creates loop if user request to continue calculator
        std::cout << "Enter first number: ";
        if (!(std::cin >> num1)) { //if input is not number, redo keeps cin from going into failstate
            std::cout << "Invalid number input. Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cout << "Enter second number: ";
        if (!(std::cin >> num2)) {
            std::cout << "Invalid number input. Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cout << "What would you like to do with these two numbers (Enter mathematical symbol) ";
        std::cin >> symbol;

        result = calculate(num1, num2, symbol);
        
        if (result != DBL_MAX) {
            std::cout << num1 << symbol << num2 << " is equal to " << result << '\n';
        }

        std::cout << "Do you want to continue? (y/n) ";

        std::cin >> userContinue;
    }

    return 0;
}

double calculate(double num1, double num2, char symbol) {
    double result;
    switch (symbol) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case  '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            std::cout << "Math error, can not divide by zero\n";
            result = DBL_MAX;
            break;
        }
        result = num1 / num2;
        break;
    default:
        std::cout << symbol << " is not a valid operator\n";
        result = DBL_MAX;
    }
    return result;
}