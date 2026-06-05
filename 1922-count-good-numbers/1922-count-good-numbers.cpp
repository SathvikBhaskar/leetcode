class Solution {
public:
    long long MOD=1e9+7;
    long long power(long long base,long long exp){
        long long ans=1;
        while(exp){
            if(exp&1)ans=(ans*base)%MOD;
            base=(base*base)%MOD;
            exp>>=1;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long ec=(n+1)/2;
        long long oc=n/2;
        long long ew=power(5,ec);
        long long ow=power(4,oc);
        return (ew*ow)%MOD;
    }
};