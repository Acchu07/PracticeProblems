#include <iostream>

void PrimeorNot(int const &n){
    int i = 2;
    while(i<n){
        if(n%i == 0){
            break;
        }
        i++;
    }
    if(i==n){
        std::cout << "Prime" << std::endl;
    }
    else{
        std::cout << "Not Prime" << std::endl;
    }
}

int main(){
    int n;
    std::cin >> n;
    PrimeorNot(n);

}