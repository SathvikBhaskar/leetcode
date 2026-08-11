class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int c=0;
            for(int x:nums){
                if((x>>i)& 1)c++;
            }
            if(c%3!=0)ans|=(1<<i);
        }
        return ans;
    }
};