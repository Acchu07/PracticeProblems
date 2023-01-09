// doesnt work move on

#include <iostream>

using namespace std;

int findpeak(const int *arr, const int& size){
    int startIndex(0);
    int endIndex(size-1);
    int peak(0);
    int mid(0);
    int a;
    while(startIndex<=endIndex){
        mid = startIndex + (endIndex - startIndex)/2;
        if(arr[mid] < arr[mid+1]){
            startIndex = mid+1;
        }
        else if (arr[mid] > arr[mid-1]){
            endIndex = mid;
        }
    }
    return startIndex;
}

int main(){
    int even[6]{2,5,9,4,3,1};
    int peak = findpeak(even,6);
    cout << peak;
}