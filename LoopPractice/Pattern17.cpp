#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    while(i<=n)
    {
        int j = 1;
        char ch = 'A'+i-1;
        while (j<=n)
        {
            // char ch = 'A'+i-1;
            std::cout << ch << " ";
            ch++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}
// 13 && 17 same output just different approaches