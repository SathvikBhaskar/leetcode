class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans=0,arr[201]={};
        for(int x:nums){
            if(x>=2*diff){
                ans+=arr[x-diff] && arr[x-2*diff];
            }
            arr[x]=true;
        }
        return ans;
    }
};