class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
        int p=1;
        int temp=n;
        while(temp>0){
            int d=temp%10;
            p*=d;
            temp/=10;
        }
        if(p%t==0){
            return n;
        }
        n++;
        }
    }
};