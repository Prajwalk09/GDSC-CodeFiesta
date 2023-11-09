#include <iostream>
#include<vector>
#include<algorithm>

/* Question Link:https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/ */

using namespace std;

class Solution
{
public:
    int countOnes(int n)
    {
        int count = 0 ;
        while(n!=0)
        {
            int bit = n&1;
            if(bit)
                count+=1;
            n = n>>1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr)
    {
        vector<pair<int, int>>digitAndBits;

        for(int i =0 ; i<arr.size(); ++i)
        {
            int it = arr[i];
            int ones = countOnes(it);
            digitAndBits.push_back({ones, it});
        }

        sort(digitAndBits.begin(), digitAndBits.end());

        vector<int> result;
        for(auto it: digitAndBits)
            result.push_back(it.second);

        return result;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {1024,512,256,128,64,32,16,8,4,2,1};
    vector<int> sorted = obj.sortByBits(arr);
    for(auto it: sorted)
        cout<<it<<" ";
    return 0;
}
