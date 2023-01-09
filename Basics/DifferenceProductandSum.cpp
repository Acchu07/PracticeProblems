#include <iostream>

int main()
{
    int n;
    std::cin >> n; // assume it to be 234
    int sum {0};
    int product {1};
    int difference {0};
    for (int i = n; i != 0; i/=10)
    {
        sum += i%10;   
        product *= i%10;
    }
    difference = product - sum;
    std::cout << difference;
    
}