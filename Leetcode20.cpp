class Solution {
public:
    bool isValid(string s) {
        stack<char> record;
        if (s.size() == 0) return true;
        
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                record.push(s[i]);
            else {
                //如果右括号更多
                if(record.size() == 0) return false;
                char c = record.top();
                record.pop();
                char match;
                
                if(c == '(') match = ')';
                if(c == '{') match = '}';
                if(c == '[') match = ']';
                
                if(s[i] != match) return false;
            }
        }
        //如果左括号更多
        if(record.size() != 0) return false;
        
        return true;
    }
};
