class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            current=max(nums[i],current+nums[i]);
            sum=max(sum,current);
        }
        return sum;
    }
};