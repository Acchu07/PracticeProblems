#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int i = 0;
    int j = 0;
    while(j < nums.size()){
        if(nums[j] != 0 && nums[i] == 0){
            swap(nums[j++],nums[i++]);
        }
        if(nums[i] != 0){
            cout << "hi";
            i++;
        }
        if(nums[j] == 0){
            j++;
        }
    }
 }

int main(){
    vector<int> nums{0,1,0,3,12,12,1,0,0,0};
    moveZeroes(nums);
    for(int x: nums)
        cout << x << " ";
}