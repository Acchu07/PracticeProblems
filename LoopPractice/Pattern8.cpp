#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    while(i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            std::cout << i+j-1;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}