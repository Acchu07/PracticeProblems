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
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}