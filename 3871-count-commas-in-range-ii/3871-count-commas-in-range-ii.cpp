class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        long long sum=0;
        long long start=1000;
        while(start<=n){
            sum+=n-start+1;
            start*=1000;
        }
        return sum;
    }
};
/*
1,000-999,999
1,000,000-999,999,999
1,000,000,000-999,999,999,999
1,000,000,000,000-999,999,999,999,999
*/