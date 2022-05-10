class Solution {
public:
    string removeDuplicates(string s) {
         string res = "";
        
        for(char &c : s){
            
            if(res.length() != 0 && res.back() == c){
                res.pop_back();
            }
            else{
                res.push_back(c);
            }
        }
        
        return res;
    }
};