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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        while(head->next->val==head->val){
            head=head->next;
            if(head->next==nullptr) return head;
        }
        ListNode* prev=head;
        ListNode* curr=prev->next;
        while(curr!=nullptr){
            if(curr->val==prev->val){
                curr=curr->next;
                prev->next=curr;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};