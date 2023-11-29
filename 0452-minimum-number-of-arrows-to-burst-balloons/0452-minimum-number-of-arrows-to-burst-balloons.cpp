class Solution {
public:
        int findMinArrowShots(vector<vector<int>>& points) {
		int n = points.size();
		sort(points.begin(),points.end());
		int p = points[0][1];
		int ans = 0;   
		 for(int i=1;i<n;i++)
		    {
		        if(p >= points[i][0])
		        {
		            ans++;
		            p = min(p, points[i][1]);
		        }
		        else
		            p = points[i][1];
		    }
		
    return n-ans;
    }
};