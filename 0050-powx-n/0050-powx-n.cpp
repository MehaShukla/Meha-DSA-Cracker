class Solution {
public:
    double myPow(double x, int n) {
    double res = 1;
        for(int i=n;i;i/=2) {
            if (i % 2) 
                res = i> 0 ? res * x : res / x;
            x = x * x;
        
        }
        return res;
    }
};