class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                int x=0;
                for(int y=i;y<i+3;y++){
                    for(int z=j;z<j+3;z++){
                        x=max(x,grid[y][z]);
                    }
                }
                ans[i][j]=x;
            }
        }
        return ans;
    }
};