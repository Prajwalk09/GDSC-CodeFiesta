#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i =1; i<=n; ++i)
        {
            if(i%3==0)
            {
                cout<<"Fizz";
                if(i%5==0)
                    cout<<"Buzz";
                if(i%7==0)
                    cout<<"Bazz";
                cout<<endl;
            }
            else if(i%5==0)
            {
                cout<<"Buzz";
                if(i%7==0)
                    cout<<"Bazz";
                cout<<endl;
            }
            else if(i%7==0)
            {
                cout<<"Bazz";
                cout<<endl;
            }
            else
            {
                cout<<i<<endl;
            }
        }
    }

}
