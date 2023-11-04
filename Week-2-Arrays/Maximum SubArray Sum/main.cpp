#include <iostream>
#include<vector>
using namespace std;
// Question Link: https://leetcode.com/problems/maximum-subarray/
class Solution
{
public:
    int maxSubArray(vector<int>& nums)
    {
        long long sum =0, maxi = LONG_MIN;
        for(int i =0; i<nums.size(); ++i)
        {
            sum+=nums[i];

            if(sum>maxi)
                maxi = sum;

            if(sum<0)
                sum = 0 ;
        }
        return maxi;
    }
};

int main()
{
    vector<int> nums = {5, 4, -1, 7, 8};
    Solution obj;
    cout<<obj.maxSubArray(nums)<<endl;
    return 0;
}
