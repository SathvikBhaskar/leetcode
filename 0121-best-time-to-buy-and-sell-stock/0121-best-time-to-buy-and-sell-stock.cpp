class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0,mi=prices[0];
        for(int p:prices){
            m=max(m,p-mi);
            mi=min(mi,p);
        }
        return m;
    }
};