#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
   // int counter = 0;
    while(i<=n)
    {
        int j = 1;   
        while (j<=n)
        {
            // char ch = 'A'+i-1;
            std::cout << char('A' + i + j - 2) << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}

// 13 && 17 same output just different approaches