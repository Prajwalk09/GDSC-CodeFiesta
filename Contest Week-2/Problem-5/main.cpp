#include <iostream>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    int moves = 0;
    int arr[n];
    for(int  i = 0; i<n; ++i)
        cin>>arr[i];
    for(int i =0; i<n-1; ++i)
    {
        if(arr[i+1]<arr[i])
        {
            moves+=arr[i]-arr[i+1];
        }
    }
    cout<<moves<<endl;
}

int main()
{
    solve();
    return 0;
}
