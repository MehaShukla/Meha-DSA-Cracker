class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums(n+1,0);
         if(n == 0){
            return 0;
        }
        if( n==1){
            return 1;
        }
        nums[0] = 0;
        nums[1] = 1;
        int maxm = INT_MIN;
       
        for(int i= 2;i<=n;i++){
            if(i%2 ==0){
                nums[i] = nums[i/2];
                // cout<<nums[i]<<endl;
            }else{
                nums[i] = nums[i/2] + nums[i/2 + 1];
            }
            maxm = max(nums[i],maxm);
        }
        return maxm;
        
    }
};