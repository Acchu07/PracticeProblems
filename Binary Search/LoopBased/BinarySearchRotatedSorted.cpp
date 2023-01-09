#include <iostream>

using namespace std;

int binarysearch(const int *arr, const int& size, const int& key, const int& pivot){
    int startIndex = 0, endIndex = size-1;
    if(arr[pivot] <= key && key <= arr[size-1]){
        startIndex = pivot;
    }
    else
        endIndex = pivot;
    while(startIndex<=endIndex){
        int mid = (startIndex + endIndex)/2;
        if(arr[mid] == key)
            return mid;
        key>arr[startIndex] ? startIndex = mid +1 : endIndex = mid - 1;
    }
    return -1;
}

int findpivot(const int *arr, const int& size){
    int startIndex = 0, endIndex = size-1;
    while(startIndex<endIndex){
        int mid = (startIndex + endIndex)/2;
        arr[mid]>=arr[0] ? startIndex = mid + 1 : endIndex=mid;
    }
    return startIndex;
}

int main(){
    int arr[5]{7,9,1,2,3};
    int key{7};
    int pivot = findpivot(arr,5);
    cout << binarysearch(arr,5,key, pivot);
    // if(arr[pivot] < arr[key] && arr[key] < arr[size-1])
    //     cout << binarysearch(arr,size,);
    // else if (arr[pivot] < arr [key] && arr[key] > startindex )

}