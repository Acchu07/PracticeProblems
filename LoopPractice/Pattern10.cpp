#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    while(i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            // char ch = 'A'+i-1;
            std::cout << char('A'+i-1) << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}