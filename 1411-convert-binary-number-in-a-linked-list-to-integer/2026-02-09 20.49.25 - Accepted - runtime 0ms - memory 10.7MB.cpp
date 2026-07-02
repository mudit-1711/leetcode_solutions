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
    int getDecimalValue(ListNode* head) {
        vector<int> ans;
        while(head!=NULL){
          ans.push_back(head->val);
          head=head->next;
        }
        int sum=0;
        int p=0;
        for(int i = ans.size()-1;i>=0;i--){
             sum = sum + ans[i]*pow(2,p);
             p++;
        }
        return sum;
    }
};