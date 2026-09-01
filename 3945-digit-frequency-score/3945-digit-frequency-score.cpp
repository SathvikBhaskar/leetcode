class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>arr(10,0);
        while(n>0){
            int i=n%10;
            arr[i]++;
            n/=10;
        }
        int sum=0;
        for(int i=0;i<10;i++)sum+=arr[i]*i;
        return sum;
    }
};