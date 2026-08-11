class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int result=0;
        for(int x:nums)result^=x;
        unsigned int mask=result & -result;
        int a=0,b=0;
        for(int x:nums){
            if(x & mask)a^=x;
            else b^=x;
        }
        return {a,b};
    }
};