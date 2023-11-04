#include <iostream>

using namespace std;
// Question Link: https://leetcode.com/problems/power-of-two/

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {

        if(n==0)
            return false;
        while(n%2==0)
            n/=2;
        return n==1;
    }
};

int main()
{
    Solution obj;
    int n ;
    cin>>n;
    cout<<obj.isPowerOfTwo(n)<<endl;
    return 0;
}
