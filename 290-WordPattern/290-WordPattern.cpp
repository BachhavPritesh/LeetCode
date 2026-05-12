// Last updated: 5/12/2026, 2:40:58 PM
class Solution {
public:
    bool wordPattern(string pattern, string s) {
         vector<string> words;
    istringstream iss(s);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }  
    if (words.size() != pattern.size()) return false;

    unordered_map<char, string> charToWord;
   
    unordered_set<string> usedWords;

    for (int i = 0; i < pattern.size(); i++) {
        char c = pattern[i];
        string w = words[i];     
        if (charToWord.count(c)) {      
            if (charToWord[c] != w) return false;
        } else {         
            if (usedWords.count(w)) return false;     
            charToWord[c] = w;
            usedWords.insert(w);
        }
    }
    return true;
    }
};