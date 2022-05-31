class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
       
        sort(intervals.begin(),intervals.end());
        vector<int> prev=intervals[0];
         vector<vector<int>> ans;
        for(int i=1;i<n;i++)
        {
            vector<int> cur=intervals[i];
            if(cur[0]<=prev[1])
            {
                prev[0]=min(prev[0],cur[0]);
                prev[1]=max(prev[1],cur[1]);
            }
            else
            {
            ans.push_back(prev);
            prev=intervals[i];
            }
            
        }
        ans.push_back(prev);
        return ans;
    }
};