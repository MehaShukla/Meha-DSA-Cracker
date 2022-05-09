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
    ListNode* swapPairs(ListNode* head) {
        if(!head) {
        return head;
    }

    // 1. Reverse the first k nodes of the linked 
   
    // int i = 0;
    int i = 2;
    ListNode* cur = head;
    ListNode* prev = NULL;

    // while(cur != NULL && i < k) {
    while(cur && i--) {
        ListNode* tmp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = tmp;
        // i++;
    }

    // 2. Ask your friend to k-Reverse the linked list composed
    // of the last n-k nodes that starts with cur node
    ListNode* headFromMyFriend = swapPairs(cur);
    head->next = headFromMyFriend;

    return prev;


    }
};