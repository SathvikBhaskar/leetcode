class Solution {
public:
    double myPow(double x, int N) {
        long long n=N;
        if(n<0){
            x=1/x;
            n=-n;
        }
        double ans=1;
        while(n){
            if(n%2==1)ans*=x;
            x*=x;
            n/=2;
        }
        return ans;
    }
};