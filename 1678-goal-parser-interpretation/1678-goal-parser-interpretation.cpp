class Solution {
public:
    string interpret(string s) {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='G')
                ans+='G';
            else if(s[i]=='('&& s[i+1]==')')
                ans+='o';
            else if(s[i]=='('&& s[i+1]!=')')
                ans+="al";                
        }
        return ans;
        
    }
};