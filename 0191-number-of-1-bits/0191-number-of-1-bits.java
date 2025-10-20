class Solution {
    public int hammingWeight(int n) {
        String x=Integer.toBinaryString(n);
        char [] a=x.toCharArray();
        int count=0;
        for(char c: a){
            if(c=='1') count++;
        }
        return count;
    }
}