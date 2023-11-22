class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map < int , int > sum ;
        for( int i = 0 ; i < size ; i++ )
        {
            if( sum.find ( target - nums[i]) != 0)
                return { i, sum [ target - nums [i]]};
            else 
                sum [ nums[i]] = i;
        }
        return {-1};
        
    }
};