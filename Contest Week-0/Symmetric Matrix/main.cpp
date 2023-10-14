#include<iostream>
using namespace std;
int main()
{
    int t,n, count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int matrix[n][n];
        for(int i = 0; i<n; ++i)
        {
            for(int j = 0; j<n; ++j)
                cin>>matrix[i][j];
        }

        count = 0;
        for(int i = 0; i<n; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                if(i == j)
                    continue;
                else if(matrix[i][j]!=matrix[j][i])
                    count+=1;
            }

        }
        if(count==0)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
            if(count == 1)
                cout<<1<<endl;
            else
                cout<<count/2<<endl;
        }
    }
}
