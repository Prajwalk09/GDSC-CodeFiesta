#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        vector<char> string_array;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0 ; i<n; ++i){
            if(s[i] == '+')
                continue;
            else
                string_array.push_back(s[i]);
        }
        sort(string_array.begin(), string_array.end());

        string result;
        int string_it = 0;
        for(int i = 0; i<n; ++i){
            if(i%2 == 0){
                result+= string_array[string_it];
                string_it+=1;
            }
            else{
                result+="+";
            }
        }
        cout<<result<<endl;

    }
}

int main()
{
    solve();
    return 0;
}
