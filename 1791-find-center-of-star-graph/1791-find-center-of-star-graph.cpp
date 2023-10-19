class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       vector <int> indegree(edges.size()+1);
        for(int i=0;i<edges.size();i++)
        {
            indegree[edges[i][0]-1]++;
            indegree[edges[i][1]-1]++;
        }
        int i=0;
        for(i=0;i<indegree.size();i++)
        {
            if(indegree[i]==edges.size())
                break;
        }
        return i+1;
    }
};