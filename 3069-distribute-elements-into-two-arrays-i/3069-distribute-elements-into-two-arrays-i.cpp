class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans={nums[0]};
        vector<int>arr={nums[1]};
        for(int i=2;i<nums.size();i++){
            if(ans.back()>arr.back())ans.push_back(nums[i]);
            else arr.push_back(nums[i]);
        }
        ans.insert(ans.end(),arr.begin(),arr.end());
        return ans;
    }
};