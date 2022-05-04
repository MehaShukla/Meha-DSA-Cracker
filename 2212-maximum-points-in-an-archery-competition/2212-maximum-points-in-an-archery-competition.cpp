class Solution {
public:
        /*
        1. Use arrows to earn more higher points
        2. Save arrows to use them in earning more lower points than using them for lesser higher points
        3. At a given section either do not use or use one more than aliceArrows[idx]
    */
    // 1 & 2 seem contradictory, hence check all combinations.
    
    vector<int> ans;
    vector<int> refArrows;
    int mxScore; 
    void solve(int remArrows, int idx, vector<int> &path, int n, int score) {
        if(remArrows < 0) {
            return;
        }
        if(idx == n && mxScore < score) {
            mxScore = score;
            path[n - 1] += remArrows;
            ans = path; // add +remArrows to last element of path
            return;
        }
        for(int i = idx; i < n; i++) {
            path[i] = 0;
            solve(remArrows, i+1, path, n, score);
            path[i] = refArrows[i] + 1;
            solve(remArrows - path[i], i+1, path, n, score + i);
        }
    }
    
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
        mxScore = INT_MIN;
        refArrows = aliceArrows;
        vector<int> path(12, -1);
        solve(numArrows, 0, path, 12, 0);
        return ans;
         
    }
};