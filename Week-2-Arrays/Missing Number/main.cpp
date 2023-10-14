#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        int result;
        vector <int> hash_array(nums.size()+1, 0);
        for(int i =0; i<nums.size(); ++i)
            hash_array[nums[i]]+=1;
        for(int i=0; i<nums.size()+1; ++i)
            if(hash_array[i] == 0)
                result = i;
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int result = obj.missingNumber(nums);
    cout<<result<<endl;
    return 0;
}
