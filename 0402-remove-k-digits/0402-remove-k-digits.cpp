class Solution {
public:
    string removeKdigits(string num, int k) {
      string ans = "";
      for(auto c: num){
          while(ans.size() && c < ans.back() && k) { ans.pop_back(); k--; }
           if(ans.size() + (c - '0')) // for 0200 = 200
          ans.push_back(c);
      }
      while(k-- && ans.size()) ans.pop_back(); 
      return ans.size()?ans: "0";
  }
};
// 1. Deleting k digits means keeping n - k digits, where n is the total number of digits.

// 2. Use a stack that you keep sorted ascendingly. You remove elements from it as long as you can still make it to n - k digits,
// and your current element is smaller than the top of the stack:

// push(2) => 2
// push(4) because 2 < 4 => 24
// push(6) because 4 < 6 => 246
// pop() because 3 < 6 and we can still end up with 2 digits => 24
// pop() for the same reason => 2
// push(3) => 23
// push(5) => 235
// Then just take the first k digits => 23. Or you can make sure never to push more than k digits, and then the final stack is your solution.

// 3. Note that you cannot pop elements if that means you will not be able to build a solution of k digits.
// For this, you need to check the current number of elements in the stack and the number of digits to the right of your current position on the input number.
// Some More Points