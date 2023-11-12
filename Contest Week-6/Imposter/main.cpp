

#include <iostream>
#include<vector>
#include<cmath>
#include<map>
using namespace std;

void solve()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> numbers;
        for(int i = 0 ; i<n; ++i)
        {
            int value;
            cin>>value;
            numbers.push_back(value);
        }
        int value = -1;
        for(int i = 1; i<n-1; ++i)
        {
            if(numbers[i] !=numbers[i+1])
            {
                value = i;
                break;
            }
        }
        if(value == -1)
            cout<<0<<endl;
        else
            cout<<value+1<<endl;

    }
}

int main()
{
    solve();
    return 0;
}
