class Solution {
public:
    void repeatString(int mult,string ans,stack<char>& stk)
    {
        while(mult)
        {
            for(int i=0;i<ans.size();i++)
            stk.push(ans[i]);
            mult--;
        }
    }
    string decodeString(string s) {
        stack<char> stk;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=']')
            stk.push(s[i]);
            else{
            string temp;
            while(stk.top()!='[')
            {
                temp+=stk.top();
                stk.pop();
            }
            stk.pop();
            reverse(temp.begin(),temp.end());
            string num;
            while(!stk.empty()&&isdigit(stk.top()))
            {
                num+=stk.top();
                stk.pop();
            }
            reverse(num.begin(),num.end());
            int mult=stoi(num);
            repeatString(mult,temp,stk);
            }
        }
       string output;
        while(!stk.empty())
        {
            output+=stk.top();
            stk.pop();
        }
        reverse(output.begin(),output.end());
        return output;
    }
};