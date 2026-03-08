class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> res;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(res.find(nums[i])!=res.end())count+=res[nums[i]];
            res[nums[i]]=res[nums[i]]+1;
        }
        return count;
    }
};