class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
                for(long long j=(long long)i*i;j<n;j+=i)prime[j]=0;
            }
        }
        return count;
    }
};