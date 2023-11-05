#include <iostream>
#include<vector>
using namespace std;

long long sumOfN(long long n){
    long long sum = (n*(n+1))/2;
    return sum;
}
void solve(){
    long long n;
    cin>>n;
    long long start =1, end = n, mid, value;
    while(start<=end){
        mid = (start+end)/2;
        if(sumOfN(mid) == n){
            value = mid;
            break;
        }
        else if(sumOfN(mid)<n){
            value = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<value<<endl;
}

int main()
{
    solve();
    return 0;
}
