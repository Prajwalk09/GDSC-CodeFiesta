#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> numbers;
    for(int i = 0 ; i<n; ++i){
        int value;
        cin>>value;
        numbers.push_back(value);
    }
    sort(numbers.begin(), numbers.end(), greater<int>());
    for(auto it: numbers)
        cout<<it<<" ";
}

int main()
{
    solve();
    return 0;
}
