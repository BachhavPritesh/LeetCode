// Last updated: 4/9/2026, 11:12:46 AM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> s;
        for(string f:strs){
            string key = f;
            sort(key.begin(),key.end());
            s[key].push_back(f);
        }

        vector<vector<string>> result;

        for(auto it : s){
            result.push_back(it.second);

        }
        return result;
    }
};  