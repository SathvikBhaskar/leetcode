class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<int>curr(m+1,0);
        vector<int>next(m+1,0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(word1[i]==word2[j])curr[j]=1+next[j+1];
                else curr[j]=max(next[j],curr[j+1]);
            }
            next=curr;
        }
        return (n+m)-(2*curr[0]);
    }
};