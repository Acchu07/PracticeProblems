#include <iostream>

using namespace std;



int main(){
    int n, m;
    //cin >> n;
    n = 3;
    m = 3;
    int** arr = new int*[n];

    // taking input
    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[m-i];
        for(int j = 0; j < (m-i) ; j++){
            cin >> arr[i][j];
        }
    }
    // print
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < (m-i) ; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete []arr[i];        
    }
    
    delete []arr;
    

}