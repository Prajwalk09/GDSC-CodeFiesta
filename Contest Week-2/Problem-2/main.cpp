#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve()
{
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i = 0 ; i<n; ++i)
        cin>>arr[i];
    sort(arr, arr+n);
    int i = n-k;
    while(k--)
    {
        cout<<arr[i]<<" ";
        i+=1;
    }

}

int main()
{
    solve();
    return 0;
}
