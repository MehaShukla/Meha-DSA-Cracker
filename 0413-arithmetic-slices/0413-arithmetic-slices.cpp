class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       int n=nums.size();
       if(n<3)
       return 0;
       int id=0,c=0,dif=0;
       int prevdif=nums[1]-nums[0];
       for(int i=1;i<n-1;i++)
       {
            dif=nums[i+1]-nums[i];
           if(dif==prevdif)
           {
id++;
           }
           else
           {
               id=0;
               prevdif=dif;
           }
           c+=id;
       }
       return c;
    }
};