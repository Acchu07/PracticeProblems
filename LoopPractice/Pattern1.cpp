#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int i = 0;
    int j = 0;
    while(i<n){
        j=0;
        while(j<n)
        {
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i++;
    }

}