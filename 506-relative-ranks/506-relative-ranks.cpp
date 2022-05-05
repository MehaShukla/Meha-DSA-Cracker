class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> q;
        for(auto x:score)
        {
            q.push(x);
        }
        map<int, string> m;
        int pos = 1;
        while(!q.empty())
        {
            if(pos==1)
            {
                m[q.top()] = "Gold Medal";
            }
            else if(pos==2)
            {
                m[q.top()] = "Silver Medal";
            }
            else if(pos==3)
            {
                m[q.top()] = "Bronze Medal";
            }
            else
            {
                m[q.top()] = to_string(pos);
            }
            q.pop();
            pos++;
        }
        vector<string> ans;
        for(auto x:score)
        {
            ans.push_back(m[x]);
        }
        return ans;
        
    }
};