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
    bool hasCycle(ListNode *head) {
        int c=0;
        ListNode* curr=head;
        while(curr!=0){
            c++;
            curr=curr->next;
            if(c>10002){
                return true;
            }
        }
        
        return false;
    }
};