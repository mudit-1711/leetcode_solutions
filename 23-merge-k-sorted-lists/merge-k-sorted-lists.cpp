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
    ListNode* mergetwo(ListNode* head1, ListNode* head2) {
        if (head1 == NULL || head2 == NULL) {
            return (head1 == NULL) ? head2 : head1;
        }
        if (head1->val >= head2->val) {
            head2->next = mergetwo(head1, head2->next);
            return head2;
        } else {
            head1->next = mergetwo(head2, head1->next);
            return head1;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = NULL;
        for (int i = 0; i < lists.size(); i++) {
            head = mergetwo(head, lists[i]);
        }
        return head;
    }
};