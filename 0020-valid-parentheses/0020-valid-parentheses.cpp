class Solution {
public:
    bool isValid(string s) {
        stack <int> parathesis;
        if(s[0]==')'|| s[0]==']'|| s[0]=='}')
            return false;
     
        for (int i = 0 ; i< s.length (); i++)
        {
            if(  parathesis.size()>0)
            {
            if(s[i]=='('|| s[i]=='['|| s[i]=='{')
                parathesis.push(s[i]);
            else if(s[i]=='}' && parathesis.top()=='{')
                parathesis.pop();
            else if(s[i]==']' && parathesis.top()=='[')
                parathesis.pop();
            else if(s[i]==')' && parathesis.top()=='(')
                parathesis.pop();
                else
                     parathesis.push(s[i]);
            }
            else
                  parathesis.push(s[i]);
               
        }
        if(parathesis.size()==0)
            return true;
        return false;
    }
};