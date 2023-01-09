#include <iostream>
using namespace std;

void swapalternate(int *a, int count)
{
    for (int i = 0; i < count-1; i=i+2)
    {
        int b = a[i];
        a[i] = a[i+1];
        a[i+1] = b;
    }
    
}

void printarray(int *a, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << a[i] << " ";
    }
    
}

int main(){
    int arr[6]{1,2,3,4,5,6};
    swapalternate(arr,6);
    printarray(arr,6);
}