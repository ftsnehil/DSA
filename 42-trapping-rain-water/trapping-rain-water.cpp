class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int left_max=height[i];
        int right_max=height[j];

        int water=0;

        while(i<j){

            if(left_max<right_max){
                i++;
                left_max=max(left_max,height[i]);
                water+=left_max-height[i];

            }
            else{
                j--;
                right_max=max(right_max,height[j]);
                water+=right_max-height[j];

            }
        }

        return water;
        
    }
};