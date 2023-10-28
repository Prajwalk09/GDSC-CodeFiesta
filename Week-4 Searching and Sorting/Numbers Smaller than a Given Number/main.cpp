#include <iostream>
#include<vector>
/* Question Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/ */
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count (101, 0);

        for(int i = 0 ; i<nums.size(); ++i)
            count[nums[i]]+=1;

        for(int i = 1 ; i<count.size() ; ++i)
            count[i] +=count[i-1];

        for(int i =0; i<nums.size(); ++i)
        {
            if(nums[i] != 0)
                nums[i] = count[nums[i] - 1];
        }

        return nums;

    }
};

int main()
{
    vector<int> nums = {8,1,2,2,3};
    Solution obj;
    vector<int> result = obj.smallerNumbersThanCurrent(nums);
    for(auto it: result)
        cout<<it<<" ";
    return 0;
}
