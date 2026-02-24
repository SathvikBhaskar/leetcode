class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long sum=0;
        int maxf=1,l=0;
        sort(nums.begin(),nums.end());
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while((long long) nums[r]*(r-l+1)-sum>k){
                sum-=nums[l];
                l++;
            }
            maxf=max(maxf,r-l+1);
        }
        return maxf;
    }
};