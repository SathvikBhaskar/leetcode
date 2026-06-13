class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>num(nums.begin(),nums.end());
        int l=0;
        for(int n:num){
            if(num.find(n-1)==num.end()){
                int a=1;
                while(num.find(n+a)!=num.end())a++;
                l=max(l,a);
            }
        }
        return l;       
    }
};