class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l=0,r=nums.size()-1;
        vector<int>ans(nums.size());
        int j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans[l]=nums[i];
                l++;
            }
            if(nums[j]>pivot){
                ans[r]=nums[j];
                r--;
            }
            j--;
        }
        while(l<=r){
            ans[l]=pivot;
            l++;
        }
        return ans;
    }
};