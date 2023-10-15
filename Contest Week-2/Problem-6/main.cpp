#include <iostream>
#include<cmath>
using namespace std;
void solve()
{
    int t, n;
    int total_last_time = INT_MAX, curr_last_time = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int entry[n], submission[n];
        for(int i = 0;i<n;++i)
            cin>>entry[i];
        for(int i  =0;i<n;++i)
            cin>>submission[i];


        for(int i = 0;i<n;++i)
        {
            if(submission[i] <0)
                continue;
            else if(entry[i] <0)
            {
                curr_last_time = 0 + submission[i];
            }
            else
                curr_last_time = entry[i] + submission[i];
            total_last_time = min(total_last_time, curr_last_time);
        }
    }
    cout<<total_last_time<<endl;
}
int main()
{
    solve();
    return 0;
}
