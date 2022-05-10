class Solution {
public:
string reduce(string s) {
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (!stk.empty())
                    stk.pop();
            } else
                stk.push(s[i]);
        }
        
        string res = "";
       // res.reserve(stk.size());
        while (!stk.empty()) {
            res = stk.top() + res;
            stk.pop();
        }
        return res;
    }
    
    bool backspaceCompare(string s, string t) {
        return reduce(s) == reduce(t);
    }
};