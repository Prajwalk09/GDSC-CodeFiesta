#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int count = 0;
        vector<int> new_array;
        for(int i=0; i<nums.size(); ++i)
        {
            if(nums[i]== 0)
                count+=1;
            else
            {
                new_array.push_back(nums[i]);
            }
        }
        for(int i=0; i<count; ++i)
        {
            new_array.push_back(0);
        }
        for(int i=0; i<new_array.size(); ++i)
            nums[i]= new_array[i];
    }
};

int main()
{
    vector<int> nums = {0,1,0,3,12};
    Solution obj;
    obj.moveZeroes(nums);
    for(int i =0 ; i<nums.size(); ++ i)
        cout<<nums[i]<<" ";
    return 0;
}
