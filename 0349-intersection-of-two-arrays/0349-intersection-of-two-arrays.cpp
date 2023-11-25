class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int>  s;
        unordered_map <int,int> freq;
        for ( auto i : nums1)
            freq[i]++;
        for( int i =0;i< nums2.size();i++)
        {
           if( freq[nums2[i]]>0)
               s.insert(nums2[i]);
            
        }
        for(auto i : s)
            ans.push_back(i);
        return ans;
    }
};