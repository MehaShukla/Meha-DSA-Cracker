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
        
    }
};