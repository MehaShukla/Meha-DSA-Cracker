class Solution {
public:
// optimization: 1. if is already a path no need to go into stack again
// 2. do not push first node into stack
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        if (n == 1) return {{0}};
        vector<vector<int>> res;
        stack<vector<int>> st;
        vector<int> path;
        for (auto& i : graph[0]) {
            if (i == n - 1) res.push_back({0, i});
            else st.push({0, i});
        }
        while (!st.empty()) {
            path = st.top();
            st.pop();
            int endNode = path[path.size() - 1];
            for (auto& i : graph[endNode]) {
                path.push_back(i);
                if (i == n - 1) res.push_back(path);
                else st.push(path);
                path.resize(path.size() - 1);
            }
        }
        return res;
    }
};