#include <iostream>

using namespace std;

bool binarysearch(const int size,const int *a,const int& key){
    int startIndex = 0;
    int endIndex = size-1;

    while(startIndex <= endIndex)
    {
        int mid = (startIndex+endIndex)/2;
        //cout << startIndex << " " << mid << endl;
        if(a[mid] == key){
            return 1;
        }
        if(a[startIndex]<key)
        {
            startIndex = mid+1;
            
        }
        else
        {
            endIndex = mid-1;
        }
    }

    return 0;
}

int main(){
    int a[5]{3,2,5,1,6};
    int key;
    cin >> key;
    cout << binarysearch(4,a,key);

}