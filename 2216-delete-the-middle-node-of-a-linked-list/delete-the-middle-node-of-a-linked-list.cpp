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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode* curr=head;
        int c=0;
        while(curr!=nullptr){
            c++;
            curr=curr->next;
        }
        int a=(c/2);
        ListNode* prev=head;
        curr=head->next;
        int b=0;
        while(b!=a-1){
            b++;
            prev=prev->next;
            curr=curr->next;
        }
        prev->next=curr->next;
        return head;

    }
};