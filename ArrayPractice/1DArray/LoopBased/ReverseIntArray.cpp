#include <iostream>
using namespace std;

void reversearray(int *arr, int count)
{
    for (int i = 0; i < count; i++, count--)
    {
        int a = arr[i];
        arr[i]=arr[count-1];
        arr[count-1] = a;
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
    int array[6]{1,2,3,4,5,6};
    printarray(array,6);
    cout << endl;
    reversearray(array,6);
    cout << endl;
    printarray(array,6);
}