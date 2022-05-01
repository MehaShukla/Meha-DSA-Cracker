class Solution {
public:
    int balancedStringSplit(string s) {
        int k=0,c=0;
      for(auto i:s)
      {
          if(i=='L')
              c++;
          else
              c--;
          if(c==0)
              k++;
      }
        return k;
    }
};