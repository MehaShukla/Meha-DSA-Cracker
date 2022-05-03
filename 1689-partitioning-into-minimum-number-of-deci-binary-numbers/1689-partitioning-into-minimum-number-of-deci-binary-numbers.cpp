class Solution {
public:
    int minPartitions(string n) {
      int result = 0;
    for (int c : n) {
      result = std::max(result, c);
        //if (!(9-result)) return 9;
    }
    return result-'0';
    }
};