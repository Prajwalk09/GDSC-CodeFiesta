#include <iostream>
#include<vector>
#include<algorithm>
/*Question Link: https://leetcode.com/problems/contains-duplicate/ */
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i <nums.size()-1; ++i)
            if(nums[i] == nums[i+1])
                return true;
        return false;

    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    cout<<obj.containsDuplicate(nums);
    return 0;
}
