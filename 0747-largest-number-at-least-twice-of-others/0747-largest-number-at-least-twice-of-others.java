class Solution {
    public int dominantIndex(int[] nums) {
        int max=-1;
        int i=0,j=0;
        for(i=0;i<nums.length;i++){
            if(nums[i]>max){ max=nums[i]; j=i;}
        }
        int flag=0;
        for(int num:nums){
            if(num==max) continue;
            if(max<2*num){
                flag=1;
                break;
            }
        }
        if(flag==0) return j;
        return -1;
    }
}