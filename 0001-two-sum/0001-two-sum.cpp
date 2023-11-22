class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for( int i = 0 ; i < size ; i++ )
        {
            for ( int j = 0 ; j < i ; j++ )
            {
                if( nums[i] + nums[j] == target )
                    return { i , j };
            }
              
        }
          return { -1 };
    }
};