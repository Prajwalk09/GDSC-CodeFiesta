#include <iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> count_map;
        int value=-1;
        for(int i = 0 ;i <nums.size(); ++i)
            count_map[nums[i]]++;

        for(auto it: count_map)
        {
            if(it.second > nums.size()/2)
                value = it.first;
        }
        return value;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {2,20,10,1,1,21,2};
    int result = obj.majorityElement(nums);

    cout<<result<<endl;
    return 0;
}
