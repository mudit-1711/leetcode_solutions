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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int>v;
        if(head==NULL)return head;
        while(head!=NULL){
        v.push_back(head->val);
        head=head->next;
        }
        int i,j;
        vector<int>ans;
        int c=0;
        for(i=0;i<v.size();i++){
            int sum =0;
            bool r = false;
            for(j=i;j<v.size();j++){
                sum+=v[j];
               if(sum==0){
                i=j;
                r=true;
                break;
               }
            }
            if(!r)ans.push_back(v[i]);
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* hea = dummy;
        for(i=0;i<ans.size();i++){
            dummy->next =new ListNode(ans[i]);
            dummy = dummy                               ->next;
        }
        return hea->next;
    }
};