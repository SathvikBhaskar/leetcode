class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>ans(n,0);
        int cost=0,x=0;
        for(int i=0;i<n;i++){
            ans[i]+=cost;
            if(boxes[i]=='1')x++;
            cost+=x;
        }
        cost=0,x=0;
        for(int i=n-1;i>=0;i--){
            ans[i]+=cost;
            if(boxes[i]=='1')x++;
            cost+=x;
        }
        return ans;
    }
};