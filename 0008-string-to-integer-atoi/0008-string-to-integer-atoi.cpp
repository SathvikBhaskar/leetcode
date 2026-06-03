class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        while(i<n && s[i]==' ')i++;
        int sign =1;
        if(i<n && (s[i]=='+'|| s[i]=='-')){
            if(s[i]=='-')sign=-1;
            i++;
        }
        int num=0;
        while(i<n && isdigit(s[i])){
            int d=s[i]-'0';
            if(num>INT_MAX/10 ||(num==INT_MAX/10 && d>7)){
                if(sign==1)return INT_MAX;
                else return INT_MIN;
            }
            num=num*10+d;
            i++;
        }
        return sign*num;
    }
};