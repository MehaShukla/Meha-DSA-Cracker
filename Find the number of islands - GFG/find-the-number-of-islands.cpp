// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    vector<vector<int> > movements = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
    bool valid(int x, int y, int n, int m)
    {
        return x>=0&&x<n&&y>=0&&y<m;
    }
    void bfs(vector<vector<char>> &grid,int x,int y,int n, int m)
    {
        if(grid[x][y]=='0'||grid[x][y]=='2')
        {
            return;
        }
        queue<pair<int,int> > q;
        q.push({x,y});
        grid[x][y] = '2';
        while(!q.empty())
        {
            pair<int,int> node = q.front();
            q.pop();
            x = node.first;
            y = node.second;
            for(auto move:movements)
             {
                int childx = x+move[0];
                int childy = y+move[1];
                if(valid(childx,childy,n,m))
                {
                    if(grid[childx][childy]!='2'&&grid[childx][childy]!='0')
                    {
                        q.push({childx,childy});
                        grid[childx][childy] = '2';
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    bfs(grid,i,j,n,m);
                }
            }
        }
        return count;
    }
};
   
      
// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends