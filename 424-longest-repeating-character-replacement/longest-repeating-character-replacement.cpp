class Solution {
public:
    int maxF(int i, int n, int arr[]) {
        int ans = INT_MIN;
        for (int j = 0; j < 256; j++) {
            ans = max(ans, arr[j]);
        }

        return ans;
    }
    int characterReplacement(string s, int k) {
        int arr[256] = {0};

        int i = 0, j = 0, maxi = 0, diff = 0,ans = INT_MIN, n = s.size();
        for (int j = 0; j < n; j++) {
            arr[s[j]]++;
            maxi = maxF(i, j, arr);
            diff = (j - i + 1) - maxi ;

            while (diff > k) {
                arr[s[i]]--;
                i++;

                maxi = maxF(i, j, arr);
                diff =  (j - i + 1)-maxi ;
            }

            // now either diff<k or diff== k both are fabrable for replacing

            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};