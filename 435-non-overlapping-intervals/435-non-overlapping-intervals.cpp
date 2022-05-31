 bool comp(vector<int>& a, vector<int>& b)
  {  
    return a[1]<b[1];
  }
class Solution {
public:
   
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int c=0;
        int n=intervals.size();
        if(n==0)
            return 0;
        sort(intervals.begin(),intervals.end(),comp);
        vector<int> prev=intervals[0];
        for(int i=1;i<n;i++)
        {
            vector<int> cur=intervals[i];
            if(cur[0]<prev[1])
                c++;
            else
            prev=intervals[i];
        }
        return c;
    }
};