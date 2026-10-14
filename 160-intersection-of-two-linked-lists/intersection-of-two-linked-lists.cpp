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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr || headB==nullptr) return nullptr;
        ListNode* c1=headA;
        ListNode* c2=headB;
        if(c1==c2) return c1;
        map<ListNode*,int> m;
        m[c1]=c1->val;
        m[c2]=c2->val;
        while(c1->next!=nullptr && c2->next!=nullptr){
            if(m[c1->next]){
                return c1->next;
            }
            m[c1->next]=c1->next->val;
            if(m[c2->next]){
                return c2->next;
            }
            m[c2->next]=c2->next->val;
            c1=c1->next;
            c2=c2->next;
        } 
        while(c1->next!=nullptr){
            if(m[c1->next]){
                return c1->next;
            }
            c1=c1->next;
        }
        while(c2->next!=nullptr){
            if(m[c2->next]){
                return c2->next;
            }
            c2=c2->next;
        }
        return nullptr;
        
    }
};