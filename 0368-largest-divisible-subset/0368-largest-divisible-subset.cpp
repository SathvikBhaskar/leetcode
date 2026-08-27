class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>parent(n);
        for(int i=0;i<n;i++)parent[i]=i;
        sort(nums.begin(),nums.end());
        int last=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    parent[i]= j;
                }
            }
            if(dp[i]>dp[last])last=i;
        }
        vector<int>ans;
        while(parent[last]!=last){
            ans.push_back(nums[last]);
            last=parent[last];
        }
        ans.push_back(nums[last]);
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};