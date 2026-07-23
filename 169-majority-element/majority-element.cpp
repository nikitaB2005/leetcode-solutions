class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's Algo
        // int freq=0,n=nums.size(),ans=0;
        // for(int i=0;i<n;i++){
        //     if(freq==0)ans=nums[i];
        //     if(ans==nums[i])freq++;
        //     else{
        //         freq--;
        //     }
        // }
        // return ans;

        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi=nums[0];
        for(auto it:mp){
            if(it.second>mp[maxi]){
                maxi=it.first;
            }
        }
        return maxi;
    }
};