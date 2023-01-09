#include <iostream>

int main(){
    int i = 1;
    int counter = 1;
    int n;
    std::cin >> n;
    while (i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            std::cout << counter << " ";
            counter++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}