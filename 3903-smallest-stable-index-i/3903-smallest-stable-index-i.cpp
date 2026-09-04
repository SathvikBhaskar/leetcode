class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>num(n,0);
        int ma=nums[0];
        int j=n-1;
        int mi=nums[j];
        for(int i=0;i<n;i++){
            ma=max(ma,nums[i]);
            num[i]+=ma;
            mi=min(mi,nums[j]);
            num[j]-=mi;
            j--;
        }
        for(int i=0;i<n;i++)if(num[i]<=k)return i;
        return -1;
    }
};