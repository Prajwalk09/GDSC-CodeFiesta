#include<iostream>
#include<vector>
using namespace std;

/* Question link: https://leetcode.com/problems/sort-array-by-parity/ */

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> odd_even;
        for(auto it: nums){
            if(it%2 == 0)
                odd_even.push_back(it);
        }
        for(auto it: nums){
            if(it%2 == 1)
                odd_even.push_back(it);
        }
    return odd_even;
    }
};

int main(){
    Solution obj;
    vector<int> arr = {3,1,2,4};
    vector<int> result = obj.sortArrayByParity(arr);
    for(auto it: result)
        cout<<it<<" ";
}
