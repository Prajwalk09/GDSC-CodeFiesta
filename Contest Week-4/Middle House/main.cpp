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
        vector<int> locations;
        for(int i = 0; i<n ;++i){
            int value;
            cin>>value;
            locations.push_back(value);
        }
        sort(locations.begin(), locations.end());
        int s =0, e = locations.size()-1, mid = (s+e)/2;
        cout<<locations[mid]<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
