class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
       int n=nums.size();
        vector<int>v(n,0);
        int maxNo=(int)pow(2,maximumBit)-1;
        int xor_array=0;
        for(int i=0;i<n;i++)
        {
            xor_array^=nums[i];
        }
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            v[c++]=maxNo^(xor_array);
            xor_array=(xor_array^nums[i]);
        }
        return v;
    }
};