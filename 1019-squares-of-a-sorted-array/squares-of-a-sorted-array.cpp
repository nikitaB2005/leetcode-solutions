class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        int l=0;
        int r=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[r])>abs(nums[l]))res.push_back(nums[r]*nums[r--]);
            else res.push_back(nums[l]*nums[l++]);
           
        }
        reverse(res.begin(),res.end());
        return res;
    }
};