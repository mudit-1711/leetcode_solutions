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
   ListNode* find (ListNode* head , int k){
       ListNode* temp = head;
       int count =0;
       while(temp!=NULL){
           if(count==k) return temp;
           count++;
           temp=temp->next;
       }
       return NULL;
   }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||k==0||head->next==NULL)return head;
     ListNode* tail = head;
        int length=1;
        while(tail->next!=NULL){
            tail=tail->next;
            length++;
        }
        if(k%length==0) return head;
        k=k%length;
        tail->next= head;
        ListNode* newnode = find(head, length-k-1);
head=newnode->next;
        newnode->next = NULL;

        return head;
    }
};