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
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
             ListNode* nextnode= curr->next;
            curr->next=prev;
            prev = curr;
            curr =nextnode;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        if(head==NULL)return head;
        head = rev(head);
        ListNode* temp = dummy;
        int carry=0;
        ListNode* temp1 = head;
        while(carry||temp1){
            int pro = carry;
            if(temp1){
                pro+=2*(temp1->val);
                temp1=temp1->next;
            }
         ListNode* newnode = new ListNode(pro%10);
         temp->next = newnode;
         temp = newnode;
         carry=pro/10;
        }
        return rev(dummy->next);
    }
};