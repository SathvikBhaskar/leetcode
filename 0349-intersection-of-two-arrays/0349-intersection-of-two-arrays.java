class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer>set =new HashSet<>();
        HashSet<Integer>set1 =new HashSet<>();
        for(int n:nums1) set.add(n);
        for(int n1:nums2){
            if(set.contains(n1)) set1.add(n1);
        }
        int[] arr=new int[set1.size()];
        int i=0;
        for(int n:set1){
            arr[i++]=n;
        }
        return arr;
    }
}