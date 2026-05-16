// Last updated: 5/16/2026, 7:24:02 PM
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char ,int> mp;
        for(char c:s){
            mp[c]++;
        }
         int freq = mp.begin()->second;
        for(auto& it:mp){
            if(it.second!=freq){
                return false;
            }
        }
        return true;
    }
};