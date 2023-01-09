#include <iostream>

using namespace std;

int findStartIndex(const int *arr,const int& size,int startIndex,const int& Key)
{
    cout << arr[startIndex] << endl;
    while(arr[startIndex]== Key && startIndex!=0)
    {
        startIndex--;
    }
    return startIndex+1;
}

int findendIndex(const int *arr,const int& size,int endIndex,const int& Key)
{
    while(arr[endIndex]== Key && endIndex != size)
    {
        endIndex++;
    }
    return endIndex-1;
}

int findmid(const int *arr,const int& size,const int& key){
    int startIndex(0);
    int endIndex(size-1);
    int mid(0);
    while(startIndex<=endIndex)
    {
        mid = startIndex + (endIndex - startIndex)/2;
        if(arr[mid] == key)
            return mid;
        if(key>arr[mid])
            startIndex = mid + 1;
        else
            endIndex = mid-1;
    }
    return -1;
}

int main(){
    int aeven[6]{2,5,12,12,15,19};
    int size = 6;
    int key = 12;
    int mid = findmid(aeven, size, key);
    cout << aeven[mid] << endl;
    int startIndex = findStartIndex(aeven,size,mid,key);
    int endIndex = findendIndex(aeven,size,mid,key);
    cout << startIndex << " " << endIndex;
}