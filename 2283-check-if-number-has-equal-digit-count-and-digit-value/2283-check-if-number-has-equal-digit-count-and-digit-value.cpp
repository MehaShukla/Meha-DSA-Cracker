class Solution {
public:
    bool digitCount(string num) {
        int n=num.length();
        map<char , int >m;
        
      for(long i=0;i<num.length();i++)
        m[num[i]]++;
        int j=0;
        
            
        for(auto i: m)
        { if((i.second!=(num[i.first-'0']-'0')))
               {
                  
                   return false;
               }
    }
        return true;
                
        
    }
};