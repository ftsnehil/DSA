class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int maxi=INT_MIN;
        int ans;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(maxi<mp[nums[i]]){
                maxi=mp[nums[i]];
                ans=nums[i];
            }
        }

        return ans;
    }
};