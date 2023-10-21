#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> heights_names;
        for(int i = 0 ; i <names.size(); ++i){
            heights_names[heights[i]] = names[i];
        }
        vector<string> final_names;
        for(auto it: heights_names)
            final_names.push_back(it.second);
        reverse(final_names.begin(), final_names.end());
        return final_names;
    }
};

int main()
{
    vector<string> names = {"Mary","John","Emma"};
    vector<int> height = {155, 185, 150};
    Solution obj;
    vector<string> result = obj.sortPeople(names, height);
    for(auto it: result)
            cout<<it<<" ";
    return 0;
}
