#include <iostream>

int main(){
    int i = 1;
    int n;
    int counter = 1;
    std::cin >> n;
    while(i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            std::cout << counter;
            counter++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}