class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
 int n = points.size();
        // map<int,pair<int,int>> adj;
        vector<pair<int,int>> adj[n];
        for(int i = 0;i<n;i++)
        {
            int x1 = points[i][0],y1 = points[i][1];
            for(int j = i+1;j<n;j++)
            {
                int x2 = points[j][0],y2 = points[j][1];
                int dist = abs(x1-x2) + abs(y1-y2);
                adj[i].push_back({dist,j});
                adj[j].push_back({dist,i});
            }
        }

        //prim's algorithm

        int res = 0;
        unordered_set<int> visited;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minH;
        minH.push({0,0}); //0th node is at a distance of 0 from itself
        while(visited.size()<n)
        {
            pair<int,int> value = minH.top();
            minH.pop();
            if(visited.find(value.second)!=visited.end()) continue;
            res += value.first;
            visited.insert(value.second);

            for(auto nbr:adj[value.second])
            {
                if(visited.find(nbr.second)==visited.end())
                {
                    minH.push({nbr.first,nbr.second});
                }
            }
        }
        return res;
    }
};