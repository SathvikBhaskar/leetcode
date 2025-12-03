class Solution {
    public int totalMoney(int n) {
        int sum=0,j=1;
        for(int i=0;i<n;i++){
            sum+=j+(i%7);
            if(i%7==6)j++;
        }
        return sum;
    }
}