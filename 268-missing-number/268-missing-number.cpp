class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int sum_expected=(n-1)*n/2;
        int sum=0;
        for(auto i:nums)
            sum+=i;
        if(sum==sum_expected)
            return n;
        return(sum_expected-(sum-n));
    }
};