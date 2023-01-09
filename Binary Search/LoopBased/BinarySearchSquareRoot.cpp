// Redo the code    

#include <iostream>

using namespace std;

int findsquareroot(int n){
    int startIndex = 0, endIndex = n;
    int mid = n/2;
    int ans(0);
    while(startIndex<=endIndex){
        if(mid*mid == n)
            return mid;
        if(mid*mid>n){
            endIndex = mid - 1;
        }
        else{
            ans = mid;
            startIndex = mid + 1;
        }
        mid = (startIndex + endIndex)/2;            
    }
    return ans;

}

int main()
{
    cout << findsquareroot(9);
}