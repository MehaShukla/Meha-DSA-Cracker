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
    
    bool isPalindrome(ListNode* head) {
       vector <int> v;
        ListNode *h=head;
        int n=0;
        while(h!=NULL)
        {
            v.push_back(h->val);
            n++;
            h=h->next;
        }
        int k=0;
        for(int i=0;i<n/2;i++)
        {
            if(v[i]!=v[n-i-1])
            {
                k=1;
                break;
            }
                
        }
        return !k;
    }
};