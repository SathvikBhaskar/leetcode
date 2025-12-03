class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        int count=0,i=0;
        for(int num:nums){
            if(num==1){
                if(i>0) return false;
                i=k;
            }else{
                i--;
            }

        }
        return true;
    }
}