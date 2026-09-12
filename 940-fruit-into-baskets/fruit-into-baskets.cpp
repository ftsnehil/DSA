class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        
        int n=fruits.size();
        unordered_map<int,int>mp;
        int ans=INT_MIN;

        for(int j=0;j<n;j++){
            mp[fruits[j]]++;

            while(mp.size()>2){
                mp[fruits[i]]--;

                if(mp[fruits[i]]==0){
                  mp.erase(fruits[i]);
                }
                i++;
            }

            if(mp.size()<=2){
                ans=max(ans,j-i+1);

            }
        }

        return ans;
        
    }
};