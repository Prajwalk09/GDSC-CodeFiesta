#include <iostream>
#include<vector>
/*Question Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ */
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int>& price)
    {
        int minimal = price[0], cost = 0, profit = 0;
        for(int i =1; i<price.size(); ++i)
        {
            cost = price[i] - minimal;
            profit = max(profit, cost);
            minimal = min(price[i], minimal);
        }
        return profit;
    }
};

int main()
{
    Solution obj;
    vector<int> price = {7,1,5,3,6,4};
    cout<<obj.maxProfit(price)<<endl;

    vector<int> price_2 = {7,6,4,3,1};
    cout<<obj.maxProfit(price_2)<<endl;
    return 0;
}
