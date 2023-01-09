#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int i = 2;
    for (; i < n; i++)
    {
        if(n%i==0){
            std::cout << "Not Prime" << std::endl;
            break;
        }
    }
    if(i==n){
        std::cout << "Prime" << std::endl;
    }
}