class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        int x=1;
        for(int n:nums){
            if(x)sum+=n;
            else sum-=n;
            x^=1;
        }
        return sum;
    }
};