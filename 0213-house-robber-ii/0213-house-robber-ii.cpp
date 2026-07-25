class Solution {
public:
    int solve(vector<int>& nums ,int start , int end){
        int prev2=0;
        int prev1=nums[start];
        for(int i=start+1;i<=end;i++){
            int take=nums[i]+prev2;
            int skip=prev1;
            int curr=max(take,skip);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int c1=solve(nums,0,n-2);
        int c2=solve(nums,1,n-1);
        return max(c1,c2);
    }
};