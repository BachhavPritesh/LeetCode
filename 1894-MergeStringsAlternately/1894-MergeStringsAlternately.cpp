// Last updated: 5/12/2026, 2:39:51 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0;
        int j =0;
        int s1 = word1.size();
        int s2 = word2.size();

        while(i<s1 && j<s2){
            result.push_back(word1[i++]);
            result.push_back(word2[j++]);
        }

        while(i<s1){
            result.push_back(word1[i++]);
        }

        while(j<s2){
            result.push_back(word2[j++]);
        }

        return result;
    }
};