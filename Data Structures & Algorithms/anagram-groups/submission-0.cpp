class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>result;
        for(string s:strs){
            string orderedS=s;
            sort(orderedS.begin(),orderedS.end());
            mp[orderedS].push_back(s);            
        }
        for(auto it:mp){
            result.push_back(it.second);
        }
        return result;
    }
};
