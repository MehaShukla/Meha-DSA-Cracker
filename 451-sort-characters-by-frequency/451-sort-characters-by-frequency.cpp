class Solution {
public:
    string frequencySort(string s) {
    map<char,int> m;
        for(auto x:s)
        {
            m[x]++;
        }
        priority_queue<pair<int,char> > h;
        for(auto x:m)
        {
            h.push({x.second,x.first});
        }
        string ans = "";
        while(!h.empty())
        {
            for(int i = 0;i<h.top().first;i++)
            {
                ans += h.top().second;
            }
            h.pop();
        }
        return ans;
            
    }
};