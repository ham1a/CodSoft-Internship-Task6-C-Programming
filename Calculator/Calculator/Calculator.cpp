#include <iostream>
#include <cmath>


void Calculator(float num1, float num2, char op, float answer);

int main()
{
    float num1;
    float num2;
    float answer{};
    char op;


    std::cout << "Enter a number 1: ";
    std::cin >> num1;

    std::cout << "Enter a number 2: ";
    std::cin >> num2;
    
    std::cout << "Select an Operator: ";
    std::cin >> op;

    Calculator(num1, num2, op, answer);


    return 0;
}


void Calculator(float num1,float num2, char op, float answer) {


    switch (op) {
    case '+':
    {
        answer = num1 + num2;
        std::cout << "The answer is: " << answer;
        break;
    }
    
    case '-': {
        answer = num1 - num2;
        std::cout << "The answer is: " << answer;
        break;
    }
    case '*': {
        answer = num1 * num2;
        std::cout << "The answer is: " << answer;
        break;
    }
    case '/': {
        answer = num1 / num2;
        std::cout << "The answer is: " << answer;
        break;
    }
    default:
        std::cout << "Invalid Operator";
    }
}

