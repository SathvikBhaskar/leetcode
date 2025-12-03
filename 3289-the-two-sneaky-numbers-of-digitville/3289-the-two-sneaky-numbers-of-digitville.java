class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        Arrays.sort(nums);
        int[] a=new int[2];
        int i=0,k=0;
        for(i=1;i<nums.length;i++){
            if(nums[i]==nums[i-1])a[k++]=nums[i];
        }
        return a;
    }
}