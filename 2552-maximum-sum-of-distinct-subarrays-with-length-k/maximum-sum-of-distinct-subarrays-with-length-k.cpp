class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        long long ans=0;
        long long sum=0;

        unordered_map<int,int>map;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            map[nums[i]]++;  // storing freq
        }

        if(map.size()==k){
            ans=sum;
        }

        for(int i=k;i<n;i++){
            sum-=nums[i-k];
            map[nums[i-k]]--;

            if(map[nums[i-k]]==0){
                map.erase(nums[i-k]);
            }

            sum+=nums[i];
            map[nums[i]]++;

            if(map.size()==k){
                ans=max(ans,sum);
            }

        }

        return ans;
        
    }
};