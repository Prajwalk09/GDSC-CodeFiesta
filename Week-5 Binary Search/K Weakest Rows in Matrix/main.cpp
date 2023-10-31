#include <iostream>
#include<vector>
#include<algorithm>

/*Question Link: https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/ */

using namespace std;
class Solution
{
public:
    /* One Approach*/
    int binarySearch(vector<int> nums)
    {
        int start = 0, end = nums.size()-1, mid, countOnes = 0;

        while(start<=end)
        {
            mid = (start+end)/2;

            if(nums[mid] ==  1)
            {
                countOnes = countOnes + mid - start + 1;
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return countOnes;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        for(int i = 0 ; i<mat.size(); ++i)
        {
            mat[i].push_back(i);
        }
        sort(mat.begin(), mat.end());
        vector<int> result;
        for(int i = 0; i <k; ++i)
        {
            int lastElement = mat[i].size()-1;
            result.push_back(mat[i][lastElement]);
        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>>mat = {{1,1,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,1,0,0,0},
        {1,1,1,1,1}
    };

    vector<int> result  = obj.kWeakestRows(mat,3);
    for(auto it: result)
        cout<<it<<" ";
}
