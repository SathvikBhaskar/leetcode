class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        int r=n+1,sum=0,i=0;
        vector<int>dp(n+1,n);
        for(int j=0;j<n;j++){
            sum+=arr[j];
            while(sum>target)sum-=arr[i++];
            dp[j+1]=dp[j];
            if(sum==target){
                r=min(r,j-i+1+dp[i]);
                dp[j+1]=min(dp[j],j-i+1);
            }
        }
        if(r==n+1)return -1;
        return r;
    }
};