class Solution {
public:
        int maximumScore(int a, int b, int c) {
        int maxi=max({a,b,c});
        int total=a+b+c;
        int tempsum=total-maxi;
        
        
        return maxi>=tempsum?tempsum:(total/2);
        
    }
};