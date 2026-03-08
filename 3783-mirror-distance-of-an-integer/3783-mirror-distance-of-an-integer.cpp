class Solution {
public:
    int mirrorDistance(int n) {
        int r=0;
        int temp=n;
        while(temp>0){
            r=r*10+(temp%10);
            temp/=10;
        }
        return abs(n-r);
    }
};