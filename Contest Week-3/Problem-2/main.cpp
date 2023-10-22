#include <iostream>
#include<string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int hash_array[27];
    for(int i = 0 ; i <26; ++i)
        hash_array[i] = 0 ;
    for(int i = 0 ; i <n; ++i){
        hash_array[str[i] -'a']+=1;
    }
    string result ="";
    for(int i = 0 ; i<26; ++i)
        result+=to_string(hash_array[i]);
    cout<<result<<endl;
}

int main()
{
    solve();
    return 0;
}
