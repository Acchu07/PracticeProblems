#include <iostream>
#include <algorithm>

using namespace std;

void printarray(int *arr,const int& size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergetwosorted(int arr[], int *arr2,const int& total, int size1, int size2){
    int arr3[100];
    int i = 0;
    int startindex1 = 0;
    int startindex2 = 0;
    while(i<total && startindex2 < size2){
        if(arr[startindex1] > arr2[startindex2]){
            arr3[i] = arr2[startindex2];
            startindex2++;
        }
        else{
            arr3[i] = arr[startindex1];
            startindex1++;
        }
        i++;        
    }
    while (i < total)
    {
        arr3[i] = arr[startindex1];
        startindex1++;
        i++;
    }
    printarray(arr3, total);
    
}

int main(){
    int arr[5] = {1,3,5,7,9};
    int arr2[3]{2,4,6};
    int size1 = end(arr)-begin(arr);
    int size2 = end(arr2)-begin(arr2);
    int total = size1 + size2;
    mergetwosorted(arr,arr2,total,size1,size2);

}