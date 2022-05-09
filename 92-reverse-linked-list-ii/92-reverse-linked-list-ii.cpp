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
    
    ListNode* getnode(ListNode* head, int posn){
        ListNode* temp = head;
        ListNode* val=NULL ;
        int count = 0;
        while (temp != NULL) {
            if (count == posn){
                val= temp;
                break;
            }
            count++;
            temp = temp->next;
        }
        return val;
        
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        while(left<right){
        ListNode* leftnode = getnode(head,left-1);
        ListNode* rightnode = getnode(head,right-1);
        left++;right--;
            
        int temp=leftnode->val;
        leftnode->val=rightnode->val;
        rightnode->val=temp;
        }      
    return head;
    }
};