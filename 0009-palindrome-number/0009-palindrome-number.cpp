class Solution {
    public:
        int reverseNum(int x){
	        long long rev = 0;
	        while(x){
		        int temp = x % 10;
		        rev = rev * 10 + temp;
		        x /= 10;
	        }
	        return rev;
        }
        bool isPalindrome(int x) {
            if(x < 0) return false;
            int re = reverseNum(x);      
	        return x == re; 
        }
};