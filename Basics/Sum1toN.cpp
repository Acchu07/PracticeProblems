#include<iostream>

int main(){
    int n;
    int i = 1;
    int sum = 0;
    std::cin >> n;
    while(i <= n){
        sum += i;
        i++; 
    }
    std::cout << sum;
}