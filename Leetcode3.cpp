class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int maxlen = 0;
        for(int i = 0, j = 0; i < s.size(); ++i) {
            m[s[i]]++;
            while(m[s[i]] > 1) {
                m[s[j]]--;
                j++;
            }
            maxlen = max(maxlen, i-j+1);
        }
        return maxlen;
    }
};
