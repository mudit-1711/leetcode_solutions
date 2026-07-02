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
    ListNode* sortList(ListNode* head) {
        vector<int> value;
        if(head==NULL||head->next==NULL){
            return head;
        }
        int i, j;
        ListNode* temp = head;
        while(temp!=NULL){
            value.push_back(temp->val);
            temp=temp->next;
        }
        sort(value.begin(),value.end());
        ListNode* newhead = new ListNode(value[0]);
        ListNode* temp1=newhead;
        for(i=1;i<value.size();i++){
              temp1->next= new ListNode(value[i]);
              temp1 = temp1->next;
        }
        return newhead;
    }
};