class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            long long min1=(long long)nums[i]+nums[i+1]+nums[i+2]+nums[i+3];
            if(min1>target)break;
            long long max1=(long long)nums[i]+nums[n-1]+nums[n-2]+nums[n-3];
            if(max1<target)continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                long long min2=(long long)nums[j]+nums[j+1]+nums[j+2]+nums[i];
                if(min2>target)break;
                long long max2=(long long)nums[j]+nums[n-1]+nums[n-2]+nums[i];
                if(max2<target)continue;
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long long sum=(long long)nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        while(l<r && nums[l]==nums[l+1])l++;
                        while(l<r && nums[r]==nums[r-1])r--;
                        l++;
                        r--;
                    }
                    else if(sum<target){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};