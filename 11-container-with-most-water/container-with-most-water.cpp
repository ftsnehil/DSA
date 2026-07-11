class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j=n-1;

        int maxi=0;
        int heights=0;

        while(i<j){
            heights=(j-i)*min(height[i],height[j]);
            maxi=max(heights,maxi);

            if(height[i]<height[j]) i++;
            else j--;


        }

        return maxi;


        
    }
};