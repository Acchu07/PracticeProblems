#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    while(i<=n)
    {
        int space = i-1;
        while(space)
        {
            std::cout << " ";
            space--;
        }
        int j = 1;
        int counter = i;
        while(j<=(n-i+1)){
            std::cout << counter;
            counter++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}
