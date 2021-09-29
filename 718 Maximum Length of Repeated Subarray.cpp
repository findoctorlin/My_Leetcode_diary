class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if(!m || !n) return 0;
        vector<int> dp(n+1);
        int res = 0;
        
        for(int i = m; m >= 0; --i) {
            for(int j = 0; j < n; ++j) {
                res = max(res, dp[j] = a[i] == b[j] ? dp[j+1] + 1 : 0);
            }
        }
        return res;
    }
};
