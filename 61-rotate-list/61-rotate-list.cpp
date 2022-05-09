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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next)
            return head;
    ListNode* tail = head;
    int n = 1; // to keep track of the length of the linked list
    while(tail->next != NULL) {
        tail = tail->next;
        n++;
    }
    tail->next = head;

    // 2. iterate over the linked list n-(k%n)-1 times
    //    from the head to reach the newTail

    ListNode* newTail = head;
    for(int i=0; i<n-(k%n)-1; i++) {
        newTail = newTail->next;
    }

    ListNode* newHead = newTail->next;

    // 3. break the cycle or the loop by updating the next
    //    field of the newTail

    newTail->next = NULL;

    return newHead;
    }
};