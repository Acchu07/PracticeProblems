#include<iostream>

using namespace std;

void print(int* arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    
}

void InsertionSort(int* arr,int size){
    if(size == 1 || size == 0){
        return;
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[0] > arr[i]){
            swap(arr[0],arr[i]);
        }
    }
    InsertionSort(++arr,--size);
}

int main(){
    int arr[5]{7,2,5,1,6};
    int size = 5;
    InsertionSort(arr,size);
    print(arr,size);
}