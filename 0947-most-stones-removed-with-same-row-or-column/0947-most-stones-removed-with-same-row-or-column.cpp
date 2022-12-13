class Solution {
public:
int par(int u,vector<int>&p)
{
    if(p[u]==u)
    return u;
    return par(p[u],p);
}
    int removeStones(vector<vector<int>>& stones) {
        
        int n=stones.size();
        vector<int>p(n,0);
        for(int i=0;i<n;i++)
        {
           p[i]=i;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(stones[i][0]==stones[j][0]||stones[i][1]==stones[j][1])
                {
                    int u=par(i,p);
                    int v=par(j,p);
                    if(u!=v)
                    p[u]=v;

                }
            }
        }
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(p[i]==i)
            a++;

        }
        return n-a;
    }
};