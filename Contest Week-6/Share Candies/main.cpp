
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

void solve()
{
    long long a, b;
    cin>>a>>b;
    long long sum = a+b;
    if(sum%2 == 0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
