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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* newhead = new ListNode(ans[0]);
        ListNode* temp1 = newhead;
       for(int i=1;i<ans.size();i++){
        temp1->next = new ListNode(ans[i]);
        temp1=temp1->next;
       }
       return newhead;
    }
};