class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=0;
        int n =nums.size();
        int ans=INT_MIN;
        

        while(j<n){
            if(nums[j]==0){
                i=j+1;
                j++;
            }
            else{
                ans=max(ans,j-i+1);
                j++;
            
            }
            
        }
        if(ans==INT_MIN) return 0;
        else
        return ans;
        
    }
};