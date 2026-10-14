class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visited;
        
        ListNode* curr = headA;
        while (curr != nullptr) {
            visited.insert(curr);
            curr = curr->next;
        }
        
        curr = headB;
        while (curr != nullptr) {
            if (visited.count(curr)) {
                return curr; // Found the intersection node
            }
            curr = curr->next;
        }
        
        return nullptr; // No intersection
    }
};