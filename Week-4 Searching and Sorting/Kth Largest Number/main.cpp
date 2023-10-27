#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        return nums[size-k];
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {3,2,3,1,2,4,5,5,6};
    cout<<obj.findKthLargest(arr, 4)<<endl;
    return 0;
}
