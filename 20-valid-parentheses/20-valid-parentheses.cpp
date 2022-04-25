class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    
    for(int idx = 0; idx < s.size(); idx++){
        char ch = s[idx];
        
        if(st.size() > 0){
        if(ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        
        else if (ch == ')' && st.top() == '(')
            st.pop();
        
         else if (ch == '}' && st.top() == '{')
            st.pop();
        
        else if (ch == ']' && st.top() == '[')
            st.pop();
            else
                st.push(ch);
        
        }
       else if(ch == '(' || ch == '{' || ch == '[' || ch == ')' || ch == '}' || ch == ']')
       st.push(ch);
        
    }
    
    if(st.size() == 0)
        return true;
    else 
        return false;
    }
};