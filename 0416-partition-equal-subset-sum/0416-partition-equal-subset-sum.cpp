class Solution {
public:
    bool subset(vector<int>& nums,int target){
        int n=nums.size();
        vector<bool>front(target+1,false);
        front[0]=true;
        for(int i=n-2;i>=0;i--){
            vector<bool>curr(target+1,false);
            curr[0]=true;
            for(int t=1;t<=target;t++){
                bool nottake=front[t];
                bool take=false;
                if(nums[i]<=t)take=front[t-nums[i]];
                curr[t]=nottake||take;
            }
            front=curr;
        }
        return front[target];
    } 
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int x:nums)sum+=x;
        if(sum%2)return 0;
        return subset(nums,sum/2);
    }
};