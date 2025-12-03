class Solution {
    public int minimumOperations(int[] nums) {
        int sum=0,count=0;
        for(int num:nums){
            sum=num%3;
            if(sum!=0)count++;
        }
        return count;
    }
}