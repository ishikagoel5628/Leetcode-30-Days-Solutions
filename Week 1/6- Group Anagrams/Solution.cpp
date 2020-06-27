class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();i++)
        {
            string key=strs[i];
            sort(key.begin(),key.end());
            mp[key].push_back(strs[i]);
        }
        for (auto n : mp)
        {
            ans.push_back(n.second);
        }
        return ans;
        
    }
};
