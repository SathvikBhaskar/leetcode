class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1;
        while(n>0){
            int r=n%10;
            sum+=r;
            pro*=r;
            n/=10;
        }
        return pro-sum;
    }
};