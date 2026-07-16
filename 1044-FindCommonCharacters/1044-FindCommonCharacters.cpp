// Last updated: 7/16/2026, 10:26:24 PM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26, INT_MAX);

        for (string& word : words) {
            vector<int> freq(26, 0);

            for (char c : word) {
                freq[c - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                common[i] = min(common[i], freq[i]);
            }
        }

        vector<string> result;

        for (int i = 0; i < 26; i++) {
            while (common[i]--) {
                result.push_back(string(1, 'a' + i));
            }
        }

        return result;
    }
};