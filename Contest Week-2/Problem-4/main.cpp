#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;++i)
        cin>>arr[i];
    int count = 0 ;
    for(int i = 0;i<n;++i)
    {
        if(arr[i] == 0 && arr[i+1] == 0)
        {
            count+=1;
            i+=1;
        }
        else if(arr[i] == 0)
            count+=1;
    }
    cout<<count<<endl;
}

int main()
{
    solve();
    return 0;
}
