#include <iostream>
#include<vector>
/* Question Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/*/
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int start = 0, end = arr.size(), peakIndex;
        int mid = (start+end)/2;

        while(start<end)
        {
            if(arr[mid] > arr[mid+1] && arr[mid]> arr[mid-1])
            {
                peakIndex = mid;
                break;
            }
            else if(arr[mid]<arr[mid+1])
                start = mid+1;
            else if(arr[mid]<arr[mid-1])
                end = mid;
            mid = (start+end)/2;
        }
        return peakIndex;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {0, 2, 5, 10, 7, 4, 1};
    cout<<obj.peakIndexInMountainArray(arr)<<endl;
    return 0;
}
