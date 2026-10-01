class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {

        int i=0;
        int j=0;
        int k=0;
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        while(i<nums1.length &&  j<nums2.length){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums2[j]<nums1[i]){
                j++;
            }
            else{
                nums1[k]=nums1[i];
                i++;
                k++;
                j++;
            }
        }
        return Arrays.copyOfRange(nums1,0,k);



        // HashMap<Integer,Integer>mp=new HashMap<>();
        // ArrayList<Integer>l=new ArrayList<>();
        // for(int i:nums2){
        //     mp.put(i,mp.getOrDefault(i,0)+1);
        // }
        // for(int i:nums1){
        //     if(mp.getOrDefault(i,0)>0){
        //         l.add(i);
        //         mp.put(i,mp.get(i)-1);
        //     }
        // }
        // int []ans=new int[l.size()];
        // for(int i=0;i<l.size();i++){
        //     ans[i]=l.get(i);
        // }
        // return ans;

    }
}