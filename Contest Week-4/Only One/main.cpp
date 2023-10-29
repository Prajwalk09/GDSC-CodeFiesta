#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i = 0; i<n; ++i){
            int value;
            cin>>value;
            arr.push_back(value);
        }
        sort(arr.begin(), arr.end());

        bool result = true;
        for(int i = 0; i<n-1; ++i){
            int difference = arr[i+1] - arr[i];
            if(difference >1)
                result = false;
        }
        if(result)
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
