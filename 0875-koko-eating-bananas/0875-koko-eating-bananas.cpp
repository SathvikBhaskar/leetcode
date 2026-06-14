class Solution {
public:
    bool caneat(vector<int>& piles,int h,int k){
        long long hour=0;
        for(int pile:piles){
            hour+=(pile+(long long)k-1)/k;
        }
        return hour<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(caneat(piles,h,mid)){
                r=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
};