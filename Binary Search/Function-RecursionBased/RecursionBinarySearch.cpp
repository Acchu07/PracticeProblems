#include <iostream>

using namespace std;

bool BinarySearch(int *arr, const int& key, int startIndex, int endIndex){
    if(startIndex>endIndex){
        return false;
    }
    int mid = (startIndex+endIndex)/2;
    if(arr[mid] == key){
            return 1;
        }
    if(arr[mid]>key)
    {
        return BinarySearch(arr, key, startIndex, mid-1);
            
    }
    else
    {
        return BinarySearch(arr, key, startIndex+1, endIndex);
    }
   
}

int main()
{
    int arr[5]{1,2,3,4,5};
    int size = 5;
    int key = 2;
    cout << BinarySearch(arr, key, 0, size-1) << endl;
}