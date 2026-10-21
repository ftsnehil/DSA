class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n-1;
        int i=m-1;
        

        for(int j=n-1;j>=0;j--){
            if(i>=0 && nums2[j]>nums1[i]){
                nums1[k]=nums2[j];
                k--;
            }
            else if(i>=0){
                nums1[k]=nums1[i];
                k--;
                i--;
                j++;
            }
            else {
                nums1[k]=nums2[j];
                k--;
                
            }
        }
        
    }
};