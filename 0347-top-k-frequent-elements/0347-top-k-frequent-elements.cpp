class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        vector<vector<int>>freq(nums.size()+1);
        for(int n:nums)count[n]++;
        for(const auto& a:count){
            freq[a.second].push_back(a.first);
        }    
        vector<int>res;
        for(int i=nums.size();i>0;i--){
            for(int n:freq[i]){
                res.push_back(n);
                if(res.size()==k)return res;
            }
        }
        return res;
    }
};