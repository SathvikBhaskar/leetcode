class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,n=cardPoints.size();
        for(int i=0;i<k;i++){
            l+=cardPoints[i];
        }
        int ans=l,r=0;
        for(int i=0;i<k;i++){
            l-=cardPoints[k-1-i];
            r+=cardPoints[n-1-i];
            ans=max(ans,l+r);
        }
        return ans;
    }
};