#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int wordCount = 0, maxCount = INT_MIN;
        for(int i = 0 ; i<sentences.size(); ++i)
        {
            wordCount = 0;
            string currentStr = sentences[i];

            for(int i = 0; i<currentStr.size(); ++i)
            {
                if(isspace(currentStr[i]))
                    wordCount +=1;
                else
                    continue;
            }
            wordCount+=1;
            maxCount = max(maxCount, wordCount);
        }
        return maxCount;
    }
};

int main()
{
    Solution obj;
    vector<string>sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout<<obj.mostWordsFound(sentences);
    return 0;
}
