#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int startIndexm = 0;
        int startIndexn = 0;
        int size = m+n;
        while(startIndexm < size && nums1[startIndexm] != 0){
            if(nums2[startIndexn] < nums1[startIndexm]){
                nums1.emplace(nums1.begin()+startIndexm,nums2[startIndexn++]); // shifting forward and inserting an element
            }
            startIndexm++;            
        }
        while(startIndexm < m+n && nums1[startIndexm] == 0){
            nums1[startIndexm++] = nums2[startIndexn++];
        }
            
}

int main(){
    //vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums1{2,1};
    int m = 1;
    //vector<int> nums2{2,5,6};
    vector<int> nums2{1};
    int n = 1;
    for (int i = 0; i < m+n; i++){
        cout << nums1[i] << " ";
    }
    std::cout << '\n';
    merge(nums1,m,nums2,n);
    for (int i = 0; i < m+n; i++){
        cout << nums1[i] << " ";
    }
    std::cout << '\n';

    

}