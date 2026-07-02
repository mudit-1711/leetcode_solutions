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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return head;
        int length =1;
        ListNode* temp =head;
        while(temp->next!=NULL){
            length++;
            temp=temp->next;
        }
        if(n==length){
            ListNode* del = head;
            head=head->next;
            delete del;
            return head;
        }
        int k = length - n +1;
        ListNode* tail = head;
        int count=1;
        while(tail->next!=NULL){
          if(count==k-1){
            break;
          }
          count++;
          tail=tail->next;
        }
        ListNode* del = tail->next;
        tail->next=del->next;
        delete del ;
        return head;
    }
};