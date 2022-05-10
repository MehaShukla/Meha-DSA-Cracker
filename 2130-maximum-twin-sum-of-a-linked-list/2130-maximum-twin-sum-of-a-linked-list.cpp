/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
          ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> v;
        while( head != NULL ){
            v.push_back(head->val);
            head = head->next;
        }
        int res = 0;
        int n = v.size();
        for(int i = 0; i < n/2; i++){
            res = max(res,v[i]+v[n-1-i]);
        }
        return res;    
    }
};