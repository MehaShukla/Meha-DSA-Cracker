class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        string temp = "";
        stack<char> st;
        st.push(s[0]);
        temp = temp+s[0];
        for(int i = 1;i<s.length();i++)
        {
            temp = temp+s[i];
            if(s[i]==')')
            {
                st.pop();
                if(st.empty())
                {
                    temp = temp.substr(1,temp.length()-2);
                    ans = ans + temp;
                    temp = "";
                }
            }
            else if(s[i]=='(')
            {
                st.push(s[i]);
            }
        }
        return ans;
    }
};