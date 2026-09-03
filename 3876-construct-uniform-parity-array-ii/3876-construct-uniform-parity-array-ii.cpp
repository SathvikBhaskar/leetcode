class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o=INT_MAX;
        int e=INT_MAX;
        for(int i:nums1){
            if(i%2==0)e=min(e,i);
            else o=min(o,i);
        }
        if(o==INT_MAX || e==INT_MAX)return true;
        return e>o;
    }
};