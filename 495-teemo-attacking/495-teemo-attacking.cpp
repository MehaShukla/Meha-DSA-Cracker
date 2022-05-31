class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
      int n = timeSeries.size();
        if (!n) return 0;
        int result = duration;
        for (int i = 1; i < n; i++) {
            result += min(duration, timeSeries[i] - timeSeries[i - 1]);
        }
        return result;   
    }
};