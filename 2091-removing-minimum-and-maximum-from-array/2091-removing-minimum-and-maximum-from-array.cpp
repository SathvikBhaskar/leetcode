class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        if(n==1)return 1;
        for(int k=0;k<n;k++){
            if(nums[k]<nums[i]){
                i=k;
            }else if(nums[k]>nums[j]){
                j=k;
            }
        }
        if(i>j)swap(i,j);
        return min(((n-j)+min(j-i,i+1)),((i+1)+min(j-i,n-j)));
        
    }
};