// Last updated: 5/12/2026, 2:40:23 PM
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool broken[26] = {false};

        for (char c : brokenLetters) {
            broken[c - 'a'] = true;
        }

        stringstream ss(text);
        string word;
        int count = 0;

        while (ss >> word) {
            bool ok = true;

            for (char c : word) {
                if (broken[c - 'a']) {
                    ok = false;
                    break;
                }
            }

            if (ok) count++;
        }

        return count;
    }
};

