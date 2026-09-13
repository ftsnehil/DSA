class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int i=0,j=0,n=s.size();
        int ans=INT_MIN;

        unordered_map<char,int>mp;

        for(int j=0;j<n;j++){
            mp[s[j]]++;

            while(j-i+1 >mp.size()){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);

                i++;
            }



            if(mp.size()==j-i+1){
                ans=max(ans,j-i+1);
            }
        }
        if(ans==INT_MIN) return 0;
        return ans;
        
    }
};