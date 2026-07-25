class Solution {
public:
    int rob(vector<int>& nums) {
        int p1=0;
        int p2=nums[0];
        for(int i=1;i<nums.size();i++){
            int take=nums[i]+p1;
            int skip=p2;
            int curr=max(take,skip);
            p1=p2;
            p2=curr;
        }
        return p2;
    }
};