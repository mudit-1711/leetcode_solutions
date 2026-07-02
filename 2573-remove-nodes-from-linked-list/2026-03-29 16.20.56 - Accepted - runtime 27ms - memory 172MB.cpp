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
    ListNode* rev(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr != NULL) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        ListNode* newhead = rev(head);
        int maxi = newhead->val;
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        ListNode* temp = newhead;
        while (temp != NULL) {
            if (temp->val >= maxi) {
                maxi = temp->val;
                dummy->next = new ListNode(temp->val);
                dummy=dummy->next;
            } 
            temp=temp->next;
        }
        return rev(ans->next);
    }
};