class Solution {
public:
    int minSwaps(string s) {
        int open=0,count=0;
        for(char c:s){
            if(c=='[')open++;
            else{
                if(open==0)count++;
                else open--;
            }
        }
        return (count+1)/2;
    }
};