class Solution {
public:
    int smallestNumber(int n, int t) {
        int i=n;
        int sum=1;
        while(n){
            while(i>0){
                sum*=i%10;
                i/=10;
            }
            if(sum%t==0)return n;
            n++;
            i=n;
            sum=1;
        }
        return 0;
    }
};