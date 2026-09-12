class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        long long sum=0;
        long long ans=0;

        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
            mp[nums[i]]++;
        }

        if(mp.size()==k){
            ans=sum;
    }
        

        int i=0;
        int j=k;
        while(j<n){
            sum+=nums[j];
            mp[nums[j]]++;
            j++;
            

            sum-=nums[i];
            mp[nums[i]]--;
            

            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
            
            if(mp.size()==k){
                ans=max(sum,ans);
            }
        
    }

    return ans;
    }
};