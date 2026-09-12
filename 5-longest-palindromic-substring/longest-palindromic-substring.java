class Solution {
    public String longestPalindrome(String s) {
        int l=0;
        int len=s.length();
       
        int r=0;

        if(s==null||len<1)return "";
        for(int i=0;i<len;i++){
            //odd len
            int len1=expand(s,i,i);
            //even len
            int len2=expand(s,i,i+1);
            int maxlen =Math.max(len1,len2);
            if(maxlen>r-l){
                l=i-(maxlen-1)/2;
                r=i+maxlen/2;
            }
        }
        return s.substring(l,r+1);
    }
    public Integer expand(String s,int l,int r){
        while(l>=0&&r<s.length()&&s.charAt(l)==s.charAt(r)){
            l--;
            r++;
        }
        return r-l-1;
    }
}