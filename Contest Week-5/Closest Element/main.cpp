#include <iostream>
#include<vector>
#include<cmath>
#include<map>
using namespace std;

void solve()
{
    long long n, target;
    cin>>n;

    vector<long long> nums;
    for(int i = 0; i<n; ++i)
    {
        long long value;
        cin>>value;
        nums.push_back(value);
    }

    cin>>target;

    map<long long, long long>differences;

    for(auto it: nums)
    {
        long long diff = abs(it-target);
        differences[it] = diff;
    }

    long long minDiff = INT_MAX, closest;
    for(auto it: differences)
    {
        if(it.second<minDiff)
        {
            minDiff = it.second;
            closest = it.first;
        }
    }
    cout<<closest<<endl;

}

int main()
{
    solve();
    return 0;
}
