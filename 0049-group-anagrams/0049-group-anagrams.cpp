class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>res;
        for(const auto& s:strs){
            string t=s;
            sort(t.begin(),t.end());
            res[t].push_back(s);
        }        
        vector<vector<string>>result;
        for(auto& p:res)result.push_back(p.second);
        return result;
    }
};