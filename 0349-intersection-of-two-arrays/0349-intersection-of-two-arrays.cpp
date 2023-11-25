class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
       unordered_set<int> s;
   sort(nums1.begin(),nums1.end());
     sort(nums2.begin(),nums2.end());   
        int array1 =0, array2=0;
        while(array1<nums1.size()&&array2<nums2.size())
        {
            if(nums1[array1]==nums2[array2])
            {
                s.insert(nums1[array1]);
                array1++;
                array2++;
            }
            else if(nums1[array1]<nums2[array2])
            {
                array1++;
            }
            else
                array2++;
        }
        for(auto i : s)
            ans.push_back(i);
        return ans;
    }
    
};