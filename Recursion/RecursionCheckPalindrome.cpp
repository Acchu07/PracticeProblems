// Input -> racecar
// Output -> True

#include<iostream>
#include<string>

using namespace std;

bool PalindromeCheck(const string& input, int startIndex, int endIndex){
    if(startIndex>endIndex){
        return true;
    }
    if(input[startIndex] != input[endIndex]){
        return false;
    }
    return PalindromeCheck(input, ++startIndex, --endIndex);
}

int main(){
    string input = "racecar";
    cout << PalindromeCheck(input, 0 , input.length()-1);
}