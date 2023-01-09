#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    while(i<=n)
    {
        int j = 1;
        while(j<=(n-i+1)){
            std::cout << j;
            j++;
        }
        j = 1;
        while(j<i)
        {
            std::cout << "**";
            j++;
        }
        j = n-i+1;
        while (j)
        {
            std::cout << j;
            j--;
        }
        
        std::cout << std::endl;
        i++;
    }
}
