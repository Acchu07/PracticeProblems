#include <iostream>
// not the best logic 
int main()
{
    int OutputReverse {0};
    int n,m;
    std::cin >> n;
    m=n;
    int count {1};
    while(n > 9 && n ) // assume n = 123
    {
        n = n/10;
        count*= 10;
    }
    for (; count!=0 ; count/=10)
    {
        OutputReverse += ((m%10)*count);
        m /= 10;
    }
    std::cout << OutputReverse;
}