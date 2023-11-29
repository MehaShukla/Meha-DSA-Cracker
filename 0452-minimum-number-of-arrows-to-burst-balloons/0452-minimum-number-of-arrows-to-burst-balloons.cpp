class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end(), [] (auto a, auto b)
             {
                 return a[1]<b[1];
             });
        int count =0;
            int current =points[0][1];
        for( int i =1 ;i < n ; i++)
        {
            if(current >= points[i][0])
            {
                count ++;
            }
            else
                current = points[i][1];
            
        }
        return n- count;
    }
};