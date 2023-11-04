//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
// Question Link: https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
class Solution
{
public:
    long long sum_of_each_divisor(int N)
    {
        long long sum = 0;
        for(int i=1; i<=N; ++i)
        {
            if(N%i==0)
                sum+=i;
        }
        return sum;
    }
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum =0;
        for(int i=1; i<=N; ++i)
        {
            sum+=sum_of_each_divisor(i);
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
