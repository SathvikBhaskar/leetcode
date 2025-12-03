class Solution {
    public int smallestNumber(int n) {
        int i=0,x=0;
        double z=0;
        while(i>=0){
            z=Math.pow(2,i);
            x=(int)z-1;
            if(n<=x)break;
            i++;
        }
        return x;
    }
}