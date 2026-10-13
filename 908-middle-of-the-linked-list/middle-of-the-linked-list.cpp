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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        int c=0;
        ListNode* curr=head;
        while(curr!=0){
            c++;
            curr=curr->next;
        }
        int a=(c/2);
        curr=head;
        c=0;
        while(c!=a){
            c++;
            curr=curr->next;
        }
        return curr;
    }
};