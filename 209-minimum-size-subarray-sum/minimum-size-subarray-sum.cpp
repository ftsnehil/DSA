class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int i=0;
        int j=0;
        int n=nums.size();
        
        int sum=0;

        while(j<n){
            sum+=nums[j];
            j++;

            while(sum>=target){
                ans=min(ans,j-i);
                sum-=nums[i];
                i++;
            }

            
            
            


        }

        
        if(ans==INT_MAX)
        return 0;
        else
        return ans;
        
    }
};