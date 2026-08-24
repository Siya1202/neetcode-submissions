class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> an;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            an[key].push_back(s);
        }
        for(auto& pair:an){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
