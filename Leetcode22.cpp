class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string cur;
        vector<string> res;
        dfs(n, n, cur, res);
        return res;
    }
    
private:
    void dfs(int l, int r, string cur, vector<string>& res) {
        if(l == 0 && r == 0) {
            res.push_back(cur);
            return;
        }
        else {
            if(l > 0)
                dfs(l-1, r, cur + '(', res);
            if(r > l)
                dfs(l, r-1, cur + ')', res);
        }
    }
};

//string可以直接用 + 来做append
//depth first search
