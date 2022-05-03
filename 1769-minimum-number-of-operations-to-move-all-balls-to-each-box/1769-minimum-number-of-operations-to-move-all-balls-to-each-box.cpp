class Solution {
public:
    vector<int> minOperations(string s) {
      int n=s.length();
      vector<int> dp(n,0);
    int sumpos=0,s1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                s1--;
                sumpos+=i;
            }
        }
        dp[0]=sumpos;
        if(s[0]=='1')
            s1+=2;
        for(int i=1;i<n;i++)
        {
            dp[i] = dp[i-1]+s1;
            if(s[i]=='1')
            {
                s1 += 2;
            }
        }
        return dp;
    }
};