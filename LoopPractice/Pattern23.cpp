#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    int counter = 1;
    while(i<=n)
    {
        int space = n-i;
        while(space)
        {
            std::cout << " ";
            space--;
        }
        int j = 1;
        while(j<=i){
            std::cout << counter;
            counter++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}
