#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    while(i<=n)
    {
        int space = i - 1;
        while(space)
        {
            std::cout << " ";
            space--;
        }
        int j = 1;
        while(j<=(n-i+1)){
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}
