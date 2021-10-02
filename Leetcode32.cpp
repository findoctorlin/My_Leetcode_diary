class Solution {
public:
   int longestValidParentheses(string s) {
            if(s.length() <= 1) return 0;
            int subLen = 0;
            vector<int> dp(s.size(),0);
       
            for(int i=1; i < s.length(); ++i){
                if(s[i] == ')') {
                    if(s[i-1] == '('){
                        dp[i] = (i-2) >= 0 ? (dp[i-2] + 2) : 2;
                        subLen = max(dp[i], subLen);
                    }
                    else{ // if s[i-1] == ')', combine the previous length.
                        if(i-1-dp[i-1] >= 0 && s[i-1-dp[i-1]] == '(') {
                            dp[i] = dp[i-1] + 2 + ((i-dp[i-1]-2 >= 0) ? dp[i-dp[i-1]-2]:0);
                            subLen = max(dp[i],subLen);
                        }
                    }
                }
                //else if s[i] == '(', skip it, because longest[i] must not be 0
            }
            return subLen;
        }
};
