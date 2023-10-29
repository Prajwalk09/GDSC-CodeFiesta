#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        bool value = true;
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1;
        cin>>s2;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        for(int i = 0 ; i<n ;++i){
            if(s1[i]!=s2[i])
                value = false;
        }
        if(value)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
