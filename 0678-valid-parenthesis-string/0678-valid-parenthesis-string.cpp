class Solution {
public:
    bool checkValidString(string s) {
        int mi=0,ma=0;
        for(char c:s){
            if(c=='('){
                mi++;
                ma++;
            }else if(c==')'){
                mi--;
                ma--;
            }else{
                mi--;
                ma++;
            }
            if(ma<0)return false;
            if(mi<0)mi=0;
        }
        return mi==0;

    }
};