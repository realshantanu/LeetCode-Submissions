#define max(a, b) ((a) > (b) ? (a) : (b))

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int max = 0;
        int start = 0;
        for (int end = 0 ; end< s.length() ; end++){
            if(mp.find(s[end]) != mp.end()){
                start = max(start, mp[s[end]]+1);
            }
            mp[s[end]] = end;
            max = max(max, end-start+1);
        }

        return max;
    }
};