class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int area=0;
        while(l<r){
            int mi=min(height[l],height[r]);
            area=max(area,(r-l)*mi);
            while(l<r && height[l]<=mi)l++;
            while(l<r && height[r]<=mi)r--;
        }        
        return area;
    }
};