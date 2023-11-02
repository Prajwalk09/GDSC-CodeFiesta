#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

/* Question Link: https://leetcode.com/problems/intersection-of-two-arrays/description/ */

using namespace std;
class Solution
{
public:
    /*This method uses an unordered map, but the question can be solved using the concept of Binary Search as well.*/
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int, int> count_map;
        for(int i = 0; i <nums1.size(); ++i)
        {
            if(count_map[nums1[i]] == 1)
                continue;
            else
                count_map[nums1[i]]+=1;
        }
        for(int i = 0 ; i <nums2.size(); ++i)
        {
            if(count_map[nums2[i]] == 0 || count_map[nums2[i]] == 2)
                continue;
            else
                count_map[nums2[i]]+=1;
        }
        vector<int> common_elements;
        for(auto it: count_map)
        {
            if(it.second == 2)
                common_elements.push_back(it.first);
        }
        return common_elements;
    }
};

int main()
{
    Solution obj;
    vector<int> nums1 = {4,9,5}, nums2 = {9,4,9,8,4};
    vector<int> common_elements = obj.intersection(nums1, nums2);
    for(auto it: common_elements)
        cout<<it<<" ";
    return 0;
}
