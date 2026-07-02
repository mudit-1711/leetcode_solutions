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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int c=0;
        ListNode* ath=NULL;
        ListNode* bth=NULL;
        while(temp){
            if(c==a-1)ath = temp;
            if(c==b+1){
                bth=temp;
                break;
                }
            temp=temp->next;
            c++;
        }
        ath->next=list2;
        ListNode* temp1 = ath;
        //int o=0;
        ListNode* temp2 = list2;
        
        while(temp2->next){
            temp2=temp2->next;
        }
        temp2->next = bth;
        return list1;
    }
};