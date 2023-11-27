/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

// Approach
// Iterate thru each node
// Check if it has child
// If so, flatten it by locating the end and append it back to the original linked list
// serach for the next
// Remeber solve one layer by each time!
// Complexity
// Time complexity:
// O(N)

// Space complexity:
// O(1)

// Code
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;
        Node* cur = head;
        while ( cur ) {
            Node* nxt = cur->next;
            if (cur->child) {
                Node*childcur = cur->child;
                cur->next = childcur;
                childcur->prev = cur;
                cur->child = NULL;
                while (childcur->next) {
                    childcur= childcur->next;
                }
                childcur->next = nxt;
                if (nxt) nxt->prev = childcur;
            }
            cur = cur->next;
        }
        return head;
    }
};