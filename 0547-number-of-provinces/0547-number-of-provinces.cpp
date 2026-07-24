class Solution {
public:
    void dfs(int i,vector<vector<int>>& isConnected, vector<int>& visited){
        visited[i]=1;
        int n=isConnected.size();
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1 && !visited[j]){
                dfs(j,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>visited(n,0);
        int p=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                p++;
                dfs(i,isConnected,visited);
            }
        }
        return p;
    }
};