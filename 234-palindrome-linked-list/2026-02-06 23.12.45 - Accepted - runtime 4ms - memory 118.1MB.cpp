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
    ListNode* reversell(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL){
            ListNode* nextnode = curr->next;
            curr->next=prev;
            prev = curr;
            curr= nextnode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* first = head;
        ListNode* second = reversell(slow->next);
        while(second!=NULL){
            if(first->val!=second->val){
                reversell(slow->next);
                return false;
            }
            first=first->next;
            second = second->next;
        }
        reversell(slow->next);
        return true;

        
        // ListNode* temp =head;
        // vector<int>nums;
        // while(temp!=NULL){
        //     nums.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int left=0;
        // int right=nums.size()-1;
        // while(left<right){
        //     if(nums[left]!=nums[right]){
        //         return false;
        //     }else{
        //     left++;
        //     right--;
        //     }
        // }
        // return true;
    }
};