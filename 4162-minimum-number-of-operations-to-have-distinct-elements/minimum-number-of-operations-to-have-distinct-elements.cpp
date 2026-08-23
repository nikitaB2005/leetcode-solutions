class Solution {
public:
    int minOperations(vector<int>& nums) {
       unordered_set<int>mp;
       for(int i=nums.size()-1;i>=0;i--){
        if(mp.count(nums[i])){
            return ceil((double)(i+1)/3);
        }
        mp.insert(nums[i]);
       }
       return 0;
    }
};