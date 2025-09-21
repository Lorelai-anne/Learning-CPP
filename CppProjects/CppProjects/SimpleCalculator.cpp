// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
//using namespace std;

int main()
{
    double num1, num2;
    char symbol;
    double result = 0;

    std::string userContinue = "yes";

    while (userContinue != "no") {
        num1 = 0;
        num2 = 0;
        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        std::cout << "What would you like to do with these two numbers (Enter mathematical symbol) ";
        std::cin >> symbol;

        if (symbol == '+') {
            result = num1 + num2;
        }
        else if (symbol == '-') {
            result = num1 - num2;
        }
        else if (symbol == '/') {
            result = num1 / num2;
        }
        else if (symbol == '*') {
            result = num1 * num2;
        }
        else {
            std::cout << "That symbol is not supported";
        }

        std::cout << num1 << symbol << num2 << " is equal to " << result << '\n';
        std::cout << "Do you want to continue? (yes/no) ";

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin, userContinue);
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
