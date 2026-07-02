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
    ListNode* rev(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* temp = curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* head2 = rev(slow);
        int ans = 0;
        while(head2){
            ans = max(ans,head->val+head2->val);
            head=head->next;
            head2=head2->next;
        }
        return ans;
    }
};