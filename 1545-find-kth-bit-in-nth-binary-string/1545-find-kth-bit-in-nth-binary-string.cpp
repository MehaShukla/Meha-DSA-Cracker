class Solution {
public:
    bool find_kth_bit(int n, int k) {
        if (n <= 2) {
            return k != 1;
        }
        
        const auto mid = 1 << (n - 1);
        
        if (k == mid) {
            return true;
        } else if (k < mid) {
            return find_kth_bit(n - 1, k);
        } else {
            const auto offset = k - mid;
            const auto position = mid - offset;
            return !find_kth_bit(n - 1, position);
        }
    }
    
    char findKthBit(int n, int k) {
        const auto result = find_kth_bit(n, k);
        return result ? '1' : '0';
    }
};