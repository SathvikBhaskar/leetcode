class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1);
        for(int i=0;i<=amount;i++){
            if(i%coins[0]==0)dp[i]=i/coins[0];
            else dp[i]=1e9;
        }
        for(int i=0;i<n;i++){
            for(int amt=0;amt<=amount;amt++){
                int nottake=dp[amt];
                int take=1e9;
                if(coins[i]<=amt)take=1+dp[amt-coins[i]];
                dp[amt]=min(nottake,take);
            }
        }
        if(dp[amount]>=1e9)return -1;
        return dp[amount];
    }
};