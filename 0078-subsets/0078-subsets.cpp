class Solution {
public:
    //Recursion Approach:
    //Two options at each step - once take it and once don't take the nums[i]
    vector<vector<int>> ans;
    void solve(vector<int>& nums, int i, vector<int> temp){
        if(i == nums.size()){
            ans.push_back(temp);
        }else{
            solve(nums, i + 1, temp); //skip the nums[i]
            temp.push_back(nums[i]);
            solve(nums, i + 1, temp); //take the nums[i]
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(nums, 0, temp);
        return ans;
    }
};