#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;
void solve(){
//    bool found = false;
    long long n, k;
    cin>>n>>k;
    long long first_array[n], second_array[k];
    for(long long i = 0 ; i<n; ++i)
        cin>>first_array[i];
    for(long long i = 0; i<k ;++i)
        cin>>second_array[i];

    unordered_map<int, int> mpp;
    for(long long i = 0 ; i<n; ++i)
        mpp[first_array[i]]+=1;

    for(long long i = 0 ; i <k; ++i){
        bool found = false;
        long long curren_element = second_array[i];
        if(mpp.find(curren_element)!=mpp.end())
            found = true;
        if(found)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
