class Solution {
public:
    int countGoodSubstrings(string s) {
       /* 
	 * This is classic sliding window problem with fixed window length 3 here 
	 * we will always maintain the window len 3(fixed length)  by adjusting i and j 
	 * in all similar problems
	 */
        /* i is LHS of the window */
        int i = 0;
       /* j is RHS of window */
        int j = 0;
        int n = s.size();
		
		/* Map to keep track of occurance of each char */
        unordered_map<char, int>mp;
		
		/* Variable keeping track of answer/result */
        int ans = 0;
        
        while (i < n && j < n) {
            /* Increment the count in map each time you iterate through any character */
            mp[s[j]]++;
            
           
            if (j - i + 1 < 3) {
            /* Case 1:
             *  Keep incrementing the RHS till you  make substring of exactly length 3(fixed length). 
             */
                j++;
            } else if (mp.size() == 3) {
              /* Case 2: 
			   * If the map size is exact 3 we have found the sub string with 3 unique 
               * chars(here window len 3 we are mainting always) ,
			   * increment the answer, Also shift the LHS and RHS of the current window for which result is calulated
			   * and remove the entry from map for the LHS(Note the RHS will still be part of new shifted window).
			   */
                ans++;
                mp.erase(s[i]);
                i++;
                j++;
            } else {
               /*
			    * Case 3: 
			    * If map size is not equal to 3 (sliding window len here will always be 3)then we surely have some
			    * repeating chars so we need to slide the window again.
			    * For LHS Decrement the count from map and if its zero then erase it as we are using 
			    * size of map to calucate number of unique elements present(Note the RHS will  still be part of new shifted window) 
			    */
                mp[s[i]]--;
                if (mp[s[i]] == 0) {
                    mp.erase(s[i]);
                }
                i++;
                j++;
                
            }
        }
        
        
        return ans;
    }
};