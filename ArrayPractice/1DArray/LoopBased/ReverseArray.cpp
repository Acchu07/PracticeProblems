#include <iostream>
#include <algorithm>

using namespace std;

void printarray(int *arr,const int& size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reversearray(int *arr, int endIndex,int startIndex = 0){
    for (; startIndex < endIndex; startIndex++, endIndex--){
        swap(arr[startIndex], arr[endIndex]);
    }
}

int main(){
    int arr[5]{1,2,3,4};
    int arr2[8]{1,2,3,4,5,6,9,10};
    int size = 8;
    int startIndex = 0;
    printarray(arr2,size);
    reversearray(arr2,size-1,startIndex+4);
    printarray(arr2,size);

}