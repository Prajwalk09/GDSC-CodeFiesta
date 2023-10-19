#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
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
    Solution obj;
    vector<int> vect = {8, 2,2,1,3};
    vector<int> res = obj.smallerNumbersThanCurrent(vect);
    for(int i = 0 ; i<res.size(); ++i)
        cout<<res[i]<<" ";
    return 0;
}
