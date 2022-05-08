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
    ListNode * reverse(ListNode* head) {
          if(head==NULL) return NULL;
        ListNode* temp=head, *prev=NULL, *dummy;
        while(temp) {
            dummy= temp->next;
            temp->next= prev;
            prev= temp;
            temp=dummy;
        }
        return prev;
    }
    
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        stack<int>stk;
        
        head= reverse(head);
        ListNode* temp=head;
        
        while(temp) {
            if(!stk.empty() && stk.top()<=temp->val) {
                while(!stk.empty() && stk.top()<=temp->val)
                    stk.pop();
            }
            if(stk.empty())
                ans.push_back(0);
            else if(!stk.empty() && temp->val<stk.top())
                ans.push_back(stk.top());
            
            stk.push(temp->val);
            temp=temp->next;
        }
        ::reverse(ans.begin(), ans.end());
        return ans;
        
    }
};