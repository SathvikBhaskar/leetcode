class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    result.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1])l++;
                    while(l<r && nums[r]==nums[r-1])r--;
                    l++;
                    r--;
                }
                else if(sum<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return result;
    }
};