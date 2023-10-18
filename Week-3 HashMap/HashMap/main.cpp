#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

void map_function_int()
{
    int n ;
    cin>>n;

    int arr[n];
    for(int i = 0;i < n; ++i)
        cin>>arr[i];

    // Pre-Computation
    map<long, long> mpp;
    for(int i = 0 ;i<n;++i)
        mpp[arr[i]]+=1;

    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
}

void hash_int()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i  = 0; i<n; ++i)
        cin>>arr[i];

    // Calculations
    int hash[13] = {0};
    for(int i = 0; i<n; ++i)
        hash[arr[i]] +=1;

    int q;
    cin>>q;

    while(q--)
    {
        int number;
        cin>>number;
        //Fetching the values
        cout<<hash[number]<<endl;
    }
}

void hash_string()
{
    string str;
    cin>>str;

    int hash_array[26] = {0};

    for(int i = 0 ; i < str.size(); ++i)
    {
        hash_array[str[i] - 'a']+=1;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;

        cout<<hash_array[c - 'a']<<endl;

    }
}
void map_function_char()
{
    string str;
    cin>>str;

    unordered_map<char, int> char_count;

    for(int i = 0 ;i < str.size(); ++i)
        char_count[str[i]]+=1;

    int q;
    cin>>q;

    while(q--)
    {
        char ch;
        cin>>ch;
        cout<<char_count[ch]<<endl;
    }

    for(auto it: char_count)
        cout<<it.first<<"->"<<it.second<<endl;
}

int main()
{
    map_function_char();
    return 0;
}
