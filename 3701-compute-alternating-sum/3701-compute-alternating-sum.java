class Solution {
    public int alternatingSum(int[] nums) {
        int i=0,sum=0;
        for(i=0;i<nums.length;i++){
            if(i%2==0)sum+=nums[i];
            else sum-=nums[i];
        }
        return sum;
    }
}