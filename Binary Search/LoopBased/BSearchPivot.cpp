#include <iostream>

using namespace std;

int findpivot(int *a,int size){
    int s = 0, e = size-1;
    while(s<e){
        int mid = (s+e)/2;
        if(a[mid]>=a[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    //int a[5]{5,8,9,1,3};
    int a[6]{7,9,1,2,3};
    //int a[7]{2,4,5,6,8,9,1};
    int size = 6;
    cout << findpivot(a,size);
    
}