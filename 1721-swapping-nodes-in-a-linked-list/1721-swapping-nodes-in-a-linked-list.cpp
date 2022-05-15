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
       ListNode* p1 = NULL;
    ListNode* p2 = NULL;
    void firstElement(ListNode* head,int k)
    {
        ListNode* temp = head;
        k--;
        while(k--)
        {
            temp = temp->next;
        }
        p1 = temp;
    }
    void secondElement(ListNode* head,int k)
    {
        ListNode* fast = head;
        ListNode* slow = head;
        while(k--)
        {
            fast = fast->next;
        }
        while(fast!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        p2 = slow;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)
        {
            return head;
        }
        firstElement(head,k);
        secondElement(head,k);
        swap(p1->val,p2->val);
        return head;
    }
};