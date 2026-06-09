class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long min=nums[0],max=nums[0];
        for(int num:nums){
            if(num<min)min=num;
            if(num>max)max=num;
        }
        return (long long)(max-min)*k;
    }
};