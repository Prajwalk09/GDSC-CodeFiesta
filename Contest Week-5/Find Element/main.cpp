#include <iostream>
#include<vector>
using namespace std;

void binarySearch()
{
    long long n;
    cin>>n;
    vector<long long> numbers;
    for(int i = 0 ; i<n; ++i)
    {
        long long value;
        cin>>value;
        numbers.push_back(value);
    }
    long long target;
    cin>>target;

    long long start = 0, end = n-1, mid;
    bool found = false;
    while(start<=end)
    {
        mid = (start+end)/2;

        if(numbers[mid] == target)
        {
            found = true;
            break;
        }
        else if(numbers[mid]>target)
        {
            end = mid-1;
        }
        else
            start = mid+1;
    }
    if(found)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    binarySearch();
    return 0;
}
