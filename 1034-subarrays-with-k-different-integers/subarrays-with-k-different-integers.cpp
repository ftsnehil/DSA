class Solution {
public:
    int find(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int i = 0, j = 0, n = nums.size(), total = 0;

        for (int j = 0; j < n; j++) {
            mp[nums[j]]++;

            while (mp.size() > k) {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
                i++;
            }

            total += j - i + 1;
            ;
        }

        return total;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
         return find(nums,k)-find(nums,k-1);
    }
};