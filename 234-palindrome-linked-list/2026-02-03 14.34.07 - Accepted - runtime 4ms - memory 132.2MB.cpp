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
    bool isPalindrome(ListNode* head) {
        ListNode* temp =head;
        vector<int>nums;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            if(nums[left]!=nums[right]){
                return false;
            }else{
            left++;
            right--;
            }
        }
        return true;
    }
};