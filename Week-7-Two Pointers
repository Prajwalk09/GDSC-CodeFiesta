/* Question Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/ */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        vector<int> indices;
        while(left< right){
            int sum = numbers[left]+numbers[right];

            if(sum>target){
                right-=1;
            }
            else if(sum<target){
                left+=1;
            }
            else{
                indices.push_back(left+1);
                indices.push_back(right+1);
                break;
            }
        }
        return indices;
    }
};
