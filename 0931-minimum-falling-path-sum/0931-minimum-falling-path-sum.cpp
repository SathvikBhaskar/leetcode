class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==0)return 0;
        vector<int> next=matrix[n-1];
        for(int i=n-2;i>=0;i--){
            vector<int>curr(n);
            for(int j=0;j<n;j++){
                int f=INT_MAX;
                int s=INT_MAX;
                if(j>0)f=next[j-1];
                if(j<n-1)s=next[j+1];
                curr[j]=matrix[i][j]+min(f,min(s,next[j]));
            }
            next=curr;
        }
        return *min_element(next.begin(),next.end());
    }
};