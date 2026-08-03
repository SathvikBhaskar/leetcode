class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int total=0;
        for(int x:nums)total+=x;
        if(abs(target)>total)return 0;
        if((total+target)%2)return 0;
        int req=(target+total)/2;
        int n=nums.size();
        vector<int>prev(req+1,0);
        prev[0]=1;
        if(nums[0]==0)prev[0]=2;
        else if (nums[0] <= req)prev[nums[0]] = 1;
        for(int i=1;i<n;i++){
            vector<int>dp(req+1,0);
            for(int sum=0;sum<=req;sum++){
                int nottake=prev[sum];
                int take=0;
                if(nums[i]<=sum)take=prev[sum-nums[i]];
                dp[sum]=take+nottake;
            }
            prev=dp;
        }
        return prev[req]; 
    }
};