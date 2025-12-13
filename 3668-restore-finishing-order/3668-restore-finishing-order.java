class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        HashSet<Integer>set=new HashSet<>();
        for(int n:friends) set.add(n);
        int i=0;
        for(int n:order){
            if(set.contains(n)) friends[i++]=n;
        }
        return friends;
    }
}