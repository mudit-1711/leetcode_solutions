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
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next=head;
        ListNode* curr = head;
        ListNode* prev = dummyhead;
        while(curr!=NULL&&curr->next!=NULL){
           if(curr->next->val==curr->val){
            while(curr->next!=NULL&&curr->val==curr->next->val){
                curr=curr->next;
            }
            prev->next=curr->next;
           }else{
            prev=prev->next;
           }
            curr=curr->next;
        }
        return dummyhead->next;
    }
};