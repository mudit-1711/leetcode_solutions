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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> arr;
        ListNode* temp = head;
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int s = arr.size();
        if (s == 0)
            return NULL;
        swap(arr[k - 1], arr[s - k]);
        ListNode* newhead = new ListNode(arr[0]);
        ListNode* curr = newhead;
        for (int i = 1; i <s; i++) {
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return newhead;
    }
};