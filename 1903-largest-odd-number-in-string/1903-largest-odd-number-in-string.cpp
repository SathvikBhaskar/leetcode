class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int i=num.size()-1;
        while(i>=0){
            if(num[i]%2!=0){
                break;
            }
            i--;
        }
        return ans=num.substr(0,i+1);
    }
};