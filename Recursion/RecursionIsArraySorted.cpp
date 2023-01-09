#include<iostream>

using namespace std;

bool IsSorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return IsSorted(arr+1, size -1);
}

int main()
{
    int arr[5]{2,3,5,9,10};
    cout << IsSorted(arr,5);

}