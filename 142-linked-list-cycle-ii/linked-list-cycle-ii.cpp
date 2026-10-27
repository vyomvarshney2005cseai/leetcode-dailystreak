/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> nodes;
        ListNode* curr=head;
        while(curr!=nullptr){
            if(nodes.count(curr)){
                return curr; 
            }
            nodes.insert(curr);
            curr=curr->next;
        }
        return nullptr;
    }
};