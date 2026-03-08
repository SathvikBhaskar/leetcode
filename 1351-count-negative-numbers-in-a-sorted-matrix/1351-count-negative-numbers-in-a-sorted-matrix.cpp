class Solution {
public:
    int firstneg(vector<int>& row){
        int low=0,high=row.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(row[mid]<0)high=mid;
            else low=mid+1;
        }
        if(row[low]>=0)return row.size();
        return low;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            int ne=firstneg(grid[i]);
            count+=n-ne;
        }
        return count;
    }
};