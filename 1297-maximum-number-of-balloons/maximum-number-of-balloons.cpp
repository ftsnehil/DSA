class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        

        for(int i=0;i<text.size();i++){
            mp[text[i]]++;

        }
        if(mp['b']==0 || mp['a']==0 ||mp['l']<2 || mp['o']<2 || mp['n']==0 ) {
            return 0;
        }

        int ans=min({mp['b'] , mp['a'], mp['l']/2,  mp['o']/2, mp['n'], });

        return ans;
        
        
    }
};