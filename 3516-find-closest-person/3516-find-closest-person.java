class Solution {
    public int findClosest(int x, int y, int z) {
        x=Math.abs(x-z);
        y=Math.abs(y-z);
        if(x>y)return 2;
        if(x==y) return 0;
        return 1;
    }
}