class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
      int left [n];
        left[0]=height[0];
        int right[n];
        right[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i]);
        }
        int i=0,j=n-1,mx=INT_MIN;
        while(i<j)                          //two pointers concept
        {
            int area=min(left[i],right[j])*(j-i);
            mx=max(mx,area);
            if(left[i]>right[j])
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