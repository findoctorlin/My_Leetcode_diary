class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int maxlen = 0;
        for(int i = 0, j = 0; j < s.size(); j++){
            m[s[j]]++;
            while(m[s[j]] > 1) {
                // m[s[i++]]--;    //左边界向右走，直到当前窗没有重复字符
                m[s[i]]--;
                i++;
            }
            maxlen = max(maxlen, j - i + 1);
        }
        return maxlen;
    }
};

//双指针：i负责留在原地，j负责遍历
