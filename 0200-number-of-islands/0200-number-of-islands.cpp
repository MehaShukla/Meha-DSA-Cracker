class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    ans++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return ans;
    }
    
    void bfs(int i, int j, vector<vector<int>>& vis,vector<vector<char>> grid){
        
        int m = grid.size();
        int n = grid[0].size();
        int drows[] = {-1,0,1,0};
        int dcols[] = {0,1,0,-1};
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j] = 1;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int row = it.first;
            int col = it.second;
            
            for(int k=0;k<4;k++){
                int nrow = row + drows[k];
                int ncol = col + dcols[k];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                    q.push({nrow,ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
    }
};