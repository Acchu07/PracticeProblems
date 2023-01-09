#include <iostream>

int main(){
    int n1 {0};
    int n2 {1};
    int fib;
    std::cin >> fib;
    for (int i = 1; i < fib; i++)
    {
        int n = n1 + n2;
        std::cout << n;
        n1 = n2;
        n2 = n;

    }
    
}