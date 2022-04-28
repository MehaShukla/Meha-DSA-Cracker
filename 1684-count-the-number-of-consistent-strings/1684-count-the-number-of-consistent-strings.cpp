class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       
       unordered_map<char,int>m;
        int count=0,c=0;
        for(auto i:allowed)
        {
            m[i]++;
        }
        // for(auto i:m)
        //     cout<<i.first<<'\n';
        for(int i=0;i<words.size();i++)
        {
          c=0;
            for(int j=0;j<words[i].length();j++)
                {
                    if(m.find(words[i][j])==m.end())
                    {
                        c=1;
                        break;
                    }
                }
            if(c==0)
            {   
                count++;
            //cout<<words[i]<<'\n';
            }
        }
        return count;
        
    }
};