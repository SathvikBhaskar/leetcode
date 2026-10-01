class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>num(n);
        for(int i=0;i<n;i++){
            num[i]=nums[nums[i]];
        }
        return num;
    }
};