#include<iostream>
#include<vector>

/* Question Link: https://leetcode.com/problems/search-a-2d-matrix/ */

using namespace std;
class Solution
{
public:
    bool binarySearch(vector<int>&nums, int target)
    {
        int start = 0, end = nums.size()-1, mid;
        bool value = false;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(nums[mid] == target)
            {
                value = true;
                break;
            }
            else if(nums[mid]>target)
            {
                end = mid-1;
            }
            else
                start = mid+1;
        }
        return value;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        bool isFound = false;
        for(int i = 0 ; i<matrix.size(); ++i)
        {
            if(matrix[i][0]>target)
                break;
            else
            {
                isFound = binarySearch(matrix[i], target);
            }
        }
        return isFound;
    }
};


int main()
{
    Solution obj;
    vector<vector<int>> matrix {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<obj.searchMatrix(matrix, 10)<<endl;
}
