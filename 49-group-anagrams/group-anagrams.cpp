class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        string word=" ";
        string ans=" ";

        for(int i=0;i<strs.size();i++){
            ans=strs[i];
            word=strs[i];

            sort(word.begin(),word.end());
            mp[word].push_back(ans);

        }

        vector<vector<string>> result;


        for(auto it:mp){
            result.push_back(it.second);

        }


        return result;


        
    }
};