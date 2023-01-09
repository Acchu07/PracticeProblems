#include <iostream>

using namespace std;

void storevalues(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void findmaxandmin(int *arr, int size)
{
    int Max = INT_MIN;
    int Min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]>Max){
            Max = arr[i];
        }
        if(arr[i]<Min){
            Min = arr[i];
        }
    }
    cout << Min << endl;
    cout << Max << endl;
}

int main(){
    int Array[4] = {0};
    storevalues(Array,4);
    findmaxandmin(Array,4);
}