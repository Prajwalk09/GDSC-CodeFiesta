#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    while(b!=0)
    {
        int remainder = a%b;
        a = b;
        b = remainder;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int t, count;
    cin>>t;
    while(t--)
    {
        int a;
        count = 0;
        cin>>a;
        for(int i=1; i<a; ++i)
        {
            if(gcd(a,i)==1)
                count+=1;
        }

        cout<<count<<endl;
    }

}
