#include <iostream>

int factorial(int k){
    for(int i = k-1; i > 0; i--){
        k *= i;
    }
    return k;
}

void combination(){
    int n,r;
    std::cin >> n;
    std::cin >> r;
    //int answer = n - r;
    // factorial(n);
    // factorial(r);
    // factorial(answer);
    std::cout << factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    combination();
}