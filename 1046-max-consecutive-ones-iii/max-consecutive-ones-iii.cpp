class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int i=0,j=0,n=nums.size();
        int ans=INT_MIN;
        int length;

        for(int j=0;j<n;j++){
            if(nums[j]==0) count++;
            
            while(count>k){
                
                if(nums[i]==0) count--;

                i++;
            }

            if(count<=k){
                ans=max(ans,j-i+1);

            }
        } 

        return ans;
        
    }
};