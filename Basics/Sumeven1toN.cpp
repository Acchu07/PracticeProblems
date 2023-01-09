#include<iostream>

int main(){
    int i = 0;
    int sum = 0;
    int n;
    std::cin >> n;
    while (i<=n)
    {
        if (i%2 == 0)
        {
            sum += i;
        }
        i++;
    }
    std::cout << sum;
    
}