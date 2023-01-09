// Input -> 2^2
// Output -> 4

#include<iostream>

using namespace std;

int CalculatePower(const int& n, int power){
    if(power == 0){
        return 0;
    }
    if(power == 1){
        return n;
    }
    int ans = CalculatePower(n, power/2);
    if(power%2 == 0){
        return ans * ans;
    }
    else{
        return n * (ans*ans);
    }
}

int main(){
    int n = 5;
    int power = 4;
    cout << CalculatePower(n,power);
}