class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())return 0;
        int l=0,r=height.size()-1;
        int lm=height[l],rm=height[r];
        int w=0;
        while(l<r){
            if(lm<rm){
                l++;
                lm=max(lm,height[l]);
                w+=lm-height[l];
            }else{
                r--;
                rm=max(rm,height[r]);
                w+=rm-height[r];
            }
        }    
        return w;
    }
};