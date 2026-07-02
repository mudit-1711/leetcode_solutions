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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int i,j;
        set<int>ans;
        for(i=0;i<nums.size();i++){
            ans.insert(nums[i]);
        }
        while(head!=NULL&&ans.count(head->val)){
            head=head->next;
        }
        ListNode* temp =head;
        while(temp!=NULL&&temp->next!=NULL){
            while(temp->next&&ans.count(temp->next->val)){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        return head;
    }
};