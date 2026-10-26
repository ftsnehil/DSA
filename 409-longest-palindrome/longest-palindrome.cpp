class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int count=0;

        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            if(it.second %2==0){
                count+=it.second;
            }
            else {
                count+=it.second-1;
            }
        }

        if(count<n){   // imp
            count++;
        }

        return count;
        
    }
};