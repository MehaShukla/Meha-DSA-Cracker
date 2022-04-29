class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums;
        for(int i=0;i<n;i++)
        {
           nums.push_back(start+2*i); 
        }
        int xor_num=0;
        for(auto i:nums)
            xor_num=xor_num^i;
        return xor_num;
    }
};