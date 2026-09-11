class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int f[10]={0};
        int count=0;
        for(int d:digits)f[d]++;
        for(int i=1;i<=9;i++){
            if(f[i]==0)continue;
            f[i]--;
            for(int j=0;j<=9;j++){
                if(f[j]==0)continue;
                f[j]--;
                for(int k=0;k<9;k+=2){
                    if(f[k]>0)count++;
                }
                f[j]++;
            }
            f[i]++;
        }
        return count;
    }
};