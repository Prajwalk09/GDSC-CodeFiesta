/* Question Link: https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/ */
class Solution {
public:
    bool isUnique(string s, int start, int end){
        int mid = (start+end)/2;
        if(s[start] == s[mid] || s[mid] == s[end] || s[start] == s[end])
            return false;
        return true;
    }
    int countGoodSubstrings(string s) {
        int start = 0, end = 2, count = 0, size = s.size();
        while(end<=size-1){
            if(isUnique(s, start, end)) 
                count+=1;
            start+=1;
            end+=1;
        }
        return count;
    }
};
