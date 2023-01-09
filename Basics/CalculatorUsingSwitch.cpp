#include <iostream>

int main()
{
    
    std::cout << "Enter The Type of Operation you want to Perform" << std::endl << "Addition '+' \nSubstraction '-' \nDivision '/' \nMultiplication '*' \n";
    char ch;
    std::cin >> ch;
    int a,b;
    std::cout << "Enter the values for A : ";
    std::cin >> a;
    std::cout << "Enter the values for B : ";
    std::cin >> b;

    switch (ch)
    {
    case '+':
        std::cout << "Addition of " << a << " + " << b << " = " << a+b;
        break;
    
    case '-':
    std::cout << "Substraction of " << a << " - " << b << " = " << a-b;
    break;

    case '*':
    std::cout << "Multiplication of " << a << " 8 " << b << " = " << a*b;
    break;

    case '/':
    std::cout << "Division of " << a << " / " << b << " = " << (float)a/b;
    break;
    
    default:
        break;
    }
}