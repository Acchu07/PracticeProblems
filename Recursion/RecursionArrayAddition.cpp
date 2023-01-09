#include <iostream>

using namespace std;

int ArrayAddition(int *arr, int size){
    if(size == 1){
        return arr[0];
    }
    int n = arr[0];
    return n + ArrayAddition(arr+1, size-1);

}

int main(){
    int arr[5]{3,2,5,1,6};
    cout << ArrayAddition(arr, 5);
}