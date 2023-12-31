#include<bits/stdc++.h>
using namespace std;

/* Question Link: https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1*/

class Solution
{
public:
    int isPrime(int N)
    {
        // code here
        if(N==1)
            return 0;
        bool is_prime = true;
        for(int i =2; i<=sqrt(N); ++i)
        {
            if(N%i==0)
                is_prime = false;
        }
        if(is_prime)
            return 1;
        else
            return 0;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0;
}
