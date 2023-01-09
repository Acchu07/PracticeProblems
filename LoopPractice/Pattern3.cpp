#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int j = 1;
    while(j<=n)
    {
        int i = n;
        while(i>=1)
        {
            std::cout << i;
            i--;
        }
        std::cout << std::endl;
        j++;
    }
}