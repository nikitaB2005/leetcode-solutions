class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        int n=arr.length;
        int r=0;
        while(r<n&&arr[r]<x){
            r++;
        }
        int l=r-1;
        List<Integer>res=new ArrayList<>();
        while(k>0){
        if(l<0){
            res.add(arr[r]);
            r++;
        }
        else if(r>=n){
            res.add(arr[l]);
            l--;
        }
        else if(x-arr[l]<=arr[r]-x){
            res.add(arr[l]);
            l--;
        }
        else{
            res.add(arr[r]);
            r++;
        }
        k--;
        }
        Collections.sort(res);
        return res;
    }
}