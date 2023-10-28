#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* Question Link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/description/ */
class Solution
{
public:
    int minimumSum(int num)
    {
        vector<int> numbers;
        while(num!=0)
        {
            int remainder  = num%10;
            num/=10;
            numbers.push_back(remainder);
        }
        sort(numbers.begin(), numbers.end());

        int new_number_first, new_number_second, minimum_sum;

        new_number_first = numbers[0]*10 + numbers[2];
        new_number_second = numbers[1]*10 + numbers[3];

        minimum_sum = new_number_first + new_number_second;

        return minimum_sum;
    }
};

int main()
{
    Solution obj;
    cout<<obj.minimumSum(2932);
    return 0;
}
