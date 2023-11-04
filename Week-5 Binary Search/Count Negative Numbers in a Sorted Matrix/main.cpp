#include <iostream>
#include<vector>
using namespace std;
// Question Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
class Solution
{
public:
    int countNegatives(vector<vector<int>>& grid)
    {
        int start, end, mid, count  = 0;
        for(int i = 0 ; i<grid.size(); ++i)
        {
            start = 0, end = grid[i].size()-1;
            while(start<=end)
            {
                mid = (start+end)/2;
                if(grid[i][mid]>=0)
                    start = mid+1;
                else
                {
                    count+=end-mid+1;
                    end = mid-1;
                }
            }
        }
        return count;
    }
};

int main()
{
    vector<vector<int>> grid = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    Solution obj;
    cout<<obj.countNegatives(grid)<<endl;
    return 0;
}
