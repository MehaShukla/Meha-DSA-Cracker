class Solution {
public:
    string removeOuterParentheses(string s) {
        int n =s.size();
        string str;
        int count=1;
        for(int i=1;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            if(count!=0){
                str+=s[i];
            }
            else if(count==0){
                i++;
                count=1;
            }
        }
        return str;
    }
};