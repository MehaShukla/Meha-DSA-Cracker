class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
         vector<int> inDegree(edges.size()+1);
        for(auto edge: edges){
            inDegree[edge[0]-1]++;
            inDegree[edge[1]-1]++;
        }
        
        int res = 0;
        int maxValue =0;
        
        for(int i=0; i<inDegree.size(); i++){
            if(maxValue < inDegree[i]){
                maxValue = inDegree[i];
                res = i;
            }
        }
        
        return res+1;
    }
};