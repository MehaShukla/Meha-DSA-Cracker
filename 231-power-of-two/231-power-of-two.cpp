class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n <= 0) return false;
        return !(n & (n - 1));
    }
};
//Power of 2 means only one bit of n is '1', so use the trick n&(n-1)==0 to judge whether that is the case