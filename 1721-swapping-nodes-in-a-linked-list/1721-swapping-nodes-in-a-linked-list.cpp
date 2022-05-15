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
       ListNode *temp = NULL;
        ListNode *klast=NULL;
        ListNode * kfront=NULL;
    ListNode* swapNodes(ListNode* head, int k) {
       kfront=klast=temp=head;
        int i=1;
        while(i<k)
        {
            temp=temp->next;
            kfront=kfront->next;
            i++;
        }
        while(temp->next!=NULL)
        {
           klast=klast->next;
            temp=temp->next;
        }
       swap(kfront->val,klast->val);
        return head;
    }
};