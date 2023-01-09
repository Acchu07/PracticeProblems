#include <iostream>

using namespace std;

void sum(int *arr, int size, int &sum1){
    //int sum{0};
    for (int i = 0; i < size; i++)
    {
        sum1 += arr[i];
    }
    
    //return sum;
}

void getarray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
         cin >> arr[i];
    }
    
}

int main(){
    int array[10000] = {0};
    int size;
    cin >> size;
    getarray(array,size);
    int sum1{0};
    sum(array, size, sum1);
    cout << sum1;
}