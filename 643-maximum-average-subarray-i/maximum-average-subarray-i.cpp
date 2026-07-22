class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0;
        double sum=0;
        for(int r=0;r<k;r++){
            sum+=nums[r];
        }
        double maxSum=sum;
        for(int i=1;i<=nums.size()-k;i++){
            sum=sum-nums[i-1]+nums[i+k-1];
            if(sum>maxSum) maxSum=sum;
        }
        return maxSum/k;
    }
};