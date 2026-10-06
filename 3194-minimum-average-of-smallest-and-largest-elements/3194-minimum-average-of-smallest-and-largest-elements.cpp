class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            double x=(double)(nums[i]+nums[n-1-i])/2;
            ans=min(ans,x);
        }
        return ans;
    }
};