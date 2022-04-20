class Solution {
    vector<int> parent;
    int find (int x)
    {
        return parent[x]==x?x:find(parent[x]);
    }
public:
    int findCircleNum(vector<vector<int>>& is) {
        int n=is.size();
        parent.resize(n+1,0);
        for(int i=0;i<=n;i++)
            parent[i]=i;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (is[i][j]) {
                    int x = find(i);
                    int y = find(j);
                    if (x != y)
                        parent[y] = x;
                }
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++)
            if (parent[i] == i)
                ans++;
        return ans;
    }
};