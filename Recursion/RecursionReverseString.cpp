// Input -> ABCD 
// Output -> DCBA

#include<iostream>
#include<string>

using namespace std;

void ReverseString(string& input, int startIndex, int endIndex){
    if(startIndex>endIndex){
        return;
    }
    swap(input[startIndex], input[endIndex]);
    ReverseString(input, ++startIndex, --endIndex);
}

int main(){
    string input = "ABCD";
    ReverseString(input, 0 , input.length()-1);
    cout << input;
}