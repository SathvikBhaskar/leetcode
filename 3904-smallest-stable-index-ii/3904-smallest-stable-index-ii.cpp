class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int j=n-1;
        vector<int>arr(n);
        int mi=nums[0];
        int ma=nums[j];
        for(int i=0;i<n;i++){
            mi=max(mi,nums[i]);
            arr[i]+=mi;
            ma=min(ma,nums[j]);
            arr[j]-=ma;
            j--;
        }
        for(int i=0;i<n;i++)if(arr[i]<=k)return i;
        return -1;
    }
};