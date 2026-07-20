class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        nums[l]=nums[0];
        l++;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[l]=nums[i];
                l++;
            }
            else continue;
        }
        return l;
    }
};