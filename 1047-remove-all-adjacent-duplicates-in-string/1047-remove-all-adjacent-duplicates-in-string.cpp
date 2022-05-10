class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string finalStr = "";
        for(int i = 0;i<s.length();i++)
        {
            if((!st.empty())&&(s[i]==st.top()))
            {
                st.pop();
            }
            else 
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            finalStr = st.top()+finalStr;
            st.pop();
        }
        return finalStr;
    }
};