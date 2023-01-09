#include <iostream>

using namespace std;

bool LinearSearch(int *arr, int size, const int& key){
    if(size == 0){
        return false;
    }
    if(key == arr[0]){
        return true;
    }
    return LinearSearch(arr+1,size-1,key);
}

int main(){
    int arr[5]{3,2,5,1,6};
    cout << LinearSearch(arr, 5, 10);
}