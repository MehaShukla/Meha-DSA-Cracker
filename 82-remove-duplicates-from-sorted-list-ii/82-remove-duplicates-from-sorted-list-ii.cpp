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
    ListNode* deleteDuplicates(ListNode* head) {
  
        unordered_map<int, int> count;
        ListNode* p = head;
        while (p) {
            count[p->val]++;
            p = p->next;
        }
        
        ListNode* dummyHead = new ListNode();
        dummyHead->next = head;
        p = dummyHead;
        while (p->next) {
            if (count[p->next->val] > 1) {
                p->next = p->next->next;
            }
            else p = p->next;
        }
        
        return dummyHead->next;
    }
};