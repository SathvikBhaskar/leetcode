class Solution {
    public String reverseWords(String s) {
        String[] b=s.split("\\s+");
        StringBuilder sb=new StringBuilder();
        for(int i=b.length-1;i>=0;i--){
            sb.append(b[i]);
            sb.append(" ");
        }
        s= sb.toString();
        return s.trim();
    }
}