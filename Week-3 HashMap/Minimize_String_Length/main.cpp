#include <iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int minimizedStringLength(string s) {
        int res = 0 ;
        unordered_map<char, int> count;

        for(int i = 0 ; i<s.size(); ++i)
            count[s[i]]+=1;

        for(auto it: count)
            res+=1;
        return res;
    }
};
int main()
{
    string s;
    cin>>s;
    int res;
    Solution obj;
    res = obj.minimizedStringLength(s);
    cout<<res<<endl;
}
