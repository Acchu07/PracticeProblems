#include <iostream>

using namespace std;

int firstOccurrence(const int *arr,const int& size,const int& key){
    int startIndex(0);
    int endIndex(size-1);
    int mid(0);
    int ans(-1);
    while(startIndex<=endIndex)
    {
        mid = startIndex + (endIndex - startIndex)/2;
        if(arr[mid] == key){
            ans = mid;
            endIndex = mid - 1;
        }
        if(key>arr[mid])
            startIndex = mid + 1;
        else if(key<arr[mid])
            endIndex = mid-1;
    }
    return ans;
}

int lastOccurrence(const int *arr,const int& size,const int& key, int startIndex){
    int endIndex(size-1);
    int mid(0);
    int ans(-1);
    while(startIndex<=endIndex)
    {
        mid = startIndex + (endIndex - startIndex)/2;
        if(arr[mid] == key){
            ans = mid;
            startIndex = mid + 1;
        }
        if(key>arr[mid])
            startIndex = mid + 1;
        else if(key<arr[mid])
            endIndex = mid-1;
    }
    return ans;
}

int main(){
    int aeven[6]{2,5,12,12,15,19};
    int size = 6;
    int key = 12;
    int startIndex = firstOccurrence(aeven,size,key);
    int endIndex = lastOccurrence(aeven,size,key,startIndex);
    cout << (endIndex-startIndex)+1;
}