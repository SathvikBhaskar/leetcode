class Solution {
    public String reverseWords(String s) {
        String[] b=s.split(" ");
        String temp;
        int j=b.length-1;
        for(int i=0;i<b.length/2;i++){
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            j--;
        }
        s=String.join(" ",b);
        StringBuilder sb=new StringBuilder(s);
        sb.reverse();
        return sb.toString();
    }
}