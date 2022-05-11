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
    stack<int> putValue(ListNode* head)
    {
        stack<int> s;
        while(head!=NULL)
        {
            s.push(head->val);
            head = head->next;
        }
        return s;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       stack<int> s1,s2;
        s1 = putValue(l1);
        s2 = putValue(l2);
        int carry = 0;
        ListNode* head = NULL;
        while(!s1.empty()||!s2.empty()||carry!=0)
        {
            int sum = carry;
            if(!s1.empty())
            {
                sum = sum + s1.top();
                s1.pop();
            }
            if(!s2.empty())
            {
                sum = sum + s2.top();
                s2.pop();
            }
            ListNode* n = new ListNode(sum%10);
            carry = sum/10;
            if(head==NULL)
            {
                head = n;
            }
            else
            {
                n->next = head;
                head = n;
            }
            
        }
        return head;
    }
};