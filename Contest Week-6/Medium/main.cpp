#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

void solve(){
    long long t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;

        long long maxElement = INT_MIN , minElement = INT_MAX;
        vector<long long> nums;
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);

        for(auto it: nums){
            if(it>maxElement)
                maxElement = it;
            if(it<minElement)
                minElement = it;
        }
        long long value = -1;
        for(auto it: nums){
            if(it == maxElement || it == minElement){
                continue;
            }
            else{
                value = it;
            }
        }
        cout<<value<<endl;

    }
}

int main()
{
    solve();
    return 0;
}
