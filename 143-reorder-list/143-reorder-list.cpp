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
    ListNode* h = NULL;
    ListNode* temp = NULL;
    void help(ListNode* root)
    {
        stack<int> s1,s2;
        ListNode* temp = root;
        int size = 0;
        while(temp!=NULL)
        {
            s1.push(temp->val);
            size++;
            temp = temp->next;
        }
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        temp = root;
        while(temp!=NULL)
        {
            s1.push(temp->val);
            temp = temp->next;
        }
         for(int i = 0;i<size/2;i++)
            {
                ListNode* n1 = new ListNode(s2.top());
                ListNode* n2 = new ListNode(s1.top());
                s1.pop();
                s2.pop();
                if(h==NULL)
                {
                    h = n1;
                    temp = n1;
                    temp->next = n2;
                    temp = n2;
                }
                else
                {
                    temp->next = n1;
                    temp = n1;
                    temp->next = n2;
                    temp = n2;
                }
            }
        if(size%2!=0)
        {
           ListNode* n = new ListNode(s1.top());
            if(size==1)
            {
                h = n;
                temp = n;
            }
            else
            {
                temp->next = n;
                temp = n;
            }
        }
    }
    void reorderList(ListNode* head) {
        if(head==NULL)
        {
            return;
        }
        help(head);
        *head = *h;
    }
};