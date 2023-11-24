class Solution {
    public:
        int reverseNum(int x){
	        long long X = 0;
	        while(x){
		        int temp = x % 10;
		        X = X * 10 + temp;
		        x /= 10;
	        }
	        return X;
        }
        bool isPalindrome(int x) {
            if(x < 0) return false;
            int re = reverseNum(x);      
	        return x == re; 
        }
};