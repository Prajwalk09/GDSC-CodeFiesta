#include <iostream>

using namespace std;
void solve()
{
    long long n,sum;
    cin>>n;
    long long arr[n];
    for(int i = 0 ;i<n;++i)
        cin>>arr[i];
    for(int i = 0 ;i<n;++i)
        sum+=arr[i];
    if(sum>=INT_MIN && sum<=INT_MAX)
        cout<<"int"<<endl;
    else
        cout<<"long long"<<endl;
}

int main()
{
    solve();
    return 0;
}
