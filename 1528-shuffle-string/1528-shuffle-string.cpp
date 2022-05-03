class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
     vector<pair<int,char>>v(n);
        for(int i=0;i<n;i++)
        {
            v[i].first=indices[i];
            v[i].second=s[i];
        }
        sort(v.begin(),v.end());
        string y="";
        for(auto i:v)
            y+=i.second;
        return y;
        
    }
};