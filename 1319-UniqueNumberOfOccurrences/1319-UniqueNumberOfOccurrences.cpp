// Last updated: 4/13/2026, 1:53:32 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for(int num: arr){
            freq[num]++;
        }

        unordered_set<int> m;

    for (auto& i : freq) {
        m.insert(i.second);
    }

    return freq.size()==m.size();
    }
};