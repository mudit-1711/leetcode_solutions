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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> cp;
        int idx = 2;
        ListNode* curr = head->next;
        ListNode* prev = head;
        while (curr && curr->next) {
            ListNode* nextnode = curr->next;
            int a = curr->val;
            int b = nextnode->val;
            int c = prev->val;
            if (a > c && a > b) {
                cp.push_back(idx);
            }
            if (a < c && a < b) {
                cp.push_back(idx);
            }
            prev = curr;
            curr = nextnode;
            idx++;
        }
        if (cp.size() < 2) {
            return {-1, -1};
        }
        vector<int> ans(2);
        ans[1] = cp[cp.size() - 1] - cp[0];
        ans[0] = INT_MAX;
        for (int i = 1; i < cp.size(); i++) {
            ans[0] = min(ans[0], cp[i] - cp[i - 1]);
        }
        return ans;
    }
};