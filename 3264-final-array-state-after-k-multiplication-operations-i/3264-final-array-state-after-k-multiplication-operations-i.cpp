class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
                int s=0;
        while(k>0){
            int min=INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<min){
                    min=nums[i];
                    s=i;
                }
            }
            nums[s]*=multiplier;
            k--;
        }
        return nums;
    }
};