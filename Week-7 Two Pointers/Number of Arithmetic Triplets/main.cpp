/* Question Link: https://leetcode.com/problems/number-of-arithmetic-triplets/description/ */
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> mpp;
        int count = 0;
        for(auto it: nums)
            mpp[it]+=1;
        for(auto it: nums){
            int firstRequired = it + diff, secondRequired = it + 2*diff;

            if(mpp.find(firstRequired)!=mpp.end() && mpp.find(secondRequired)!=mpp.end())
                count+=1;
        }
        return count;
    }
};
