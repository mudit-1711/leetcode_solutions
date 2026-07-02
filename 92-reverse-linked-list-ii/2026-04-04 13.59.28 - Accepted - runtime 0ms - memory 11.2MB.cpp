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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>c;
        while(head!=NULL){
            c.push_back(head->val);
            head= head->next;
        }
        int l = left-1,r=right-1;
        while(l<=r){
            swap(c[l],c[r]);
            l++;
            r--;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* newhead = dummy;
        for(int i=0;i<c.size();i++){
            dummy->next = new ListNode(c[i]);
            dummy=dummy->next;
        }
        return newhead->next;
    }
};