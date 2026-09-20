class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int ,int>mp;
        //mp[number,freq]
        for(int i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>vec (mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](const pair<int,int> a,pair<int,int> b){
           return a.second>b.second;
    });
        int i = 0;
        while (k != 0) {
            result.push_back(vec[i].first); 
            i++;
            k--;
        }
        return result;
    }
};
