class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
           if(nums2.size()<nums1.size())
               return findMedianSortedArrays(nums2,nums1);
         
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        
        int low = 0;
        int high = sz1;
        
        while(low<=high){
            
            int part1 = (low+high)/2;
            int part2 = (sz1+sz2+1)/2 - part1;
            
            int left1 = part1 == 0 ? INT_MIN : nums1[part1-1];
            int left2 = part2==0 ? INT_MIN : nums2[part2-1];
            
            int right1 = part1==sz1 ? INT_MAX : nums1[part1];
            int right2 = part2==sz2 ? INT_MAX : nums2[part2];
            
            if(left1<= right2  && left2<= right1){
                if((sz1+sz2) & 1)
                    return max(left1,left2);
                
                else 
                    return (max(left1,left2) + min(right1,right2))/2.0;
            }
            
            else if(left1> right2)
                high = part1-1;
            
            else
                low = part1+1;
        }
        
        return 0.0; 
    }
};