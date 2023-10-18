#include <iostream>
#include<vector>
#include<map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        map<int, int> mpp;
        vector <int> index;
        for(int i = 0; i<nums.size(); ++i)
        {
            int first = nums[i];
            int required = target - first;
            if(mpp.find(required) != mpp.end())
            {
                index.push_back(mpp[required]);
                index.push_back(i);
            }
            mpp[first] = i;
        }
        return index;
    }
};

int main()
{
    vector<int> arr = {1, 3, 12, 4, 9};
    int target = 15;
    Solution obj;

    vector<int> result = obj.twoSum(arr, target);
    for(int i = 0 ; i<result.size(); ++i)
        cout<<result[i]<<" ";

    return 0;
}
