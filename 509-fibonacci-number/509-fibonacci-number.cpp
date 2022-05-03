class Solution {
public:
  int fib(int n) {
        vector<int> dp(31, 0);
        dp[0] = 0; dp[1] = 1;
        for(int i=2; i<=30; i++)// space time both O(n)
            dp[i]= dp[i-1] + dp[i-2];
        return dp[n];
    }
};