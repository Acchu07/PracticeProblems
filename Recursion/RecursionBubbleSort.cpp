// Input -> 2^2
// Output -> 4

#include<iostream>

using namespace std;

void print(int* arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    
}

void BubbleSort(int* arr,int size){
    if(size == 1 || size == 0){
        return;
    }
    for (int i = 0; i < size; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,--size);
}

int main(){
    int arr[5]{7,2,5,1,6};
    int size = 5;
    BubbleSort(arr,size);
    print(arr,size);
}