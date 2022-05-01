class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1,mx=INT_MIN;
        while(i<j)                          //two pointers concept
        {
            int area=min(height[i],height[j])*(j-i);// area chye so beadth nikalre
            mx=max(mx,area);
            if(height[i]>height[j])
                j--;
            else
                i++;
            
        }
        return mx;
        // int ans=0;
        // for(int i=1;i<n-1;i++)
        // {
        //     ans+=(min(left[i],right[i]));
        // }
        // return ans;
    }
};