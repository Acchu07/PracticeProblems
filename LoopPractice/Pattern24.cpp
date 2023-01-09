#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    while(i<=n)
    {
        int space = n-i;
        while(space)
        {
            std::cout << " ";
            space--;
        }
        int j = 1;
        while(j<=i)
        {
            std::cout << j;
            j++;
        }
        j = i - 1;
        while(j)
        {
            std::cout << j;
            j--;
        }
        std::cout << std::endl;
        i++;
    }
}
