class Solution {
public:
    int climbStairs(int n) {
        int prev1=1;
        int prev2=2;
        if(n==prev1||n==prev2){
            return n;
        }
        int steps=0;
        for(int i=3;i<=n;i++){
            steps=prev1+prev2;
            prev1=prev2;
            prev2=steps;
        }
        return steps;
    }
};