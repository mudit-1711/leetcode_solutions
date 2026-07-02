class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int sum;
        int right=numbers.size()-1;
        vector<int>ans;
        
        while(left<right){
            sum = numbers[left]+numbers[right];
            if(sum==target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
                
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};