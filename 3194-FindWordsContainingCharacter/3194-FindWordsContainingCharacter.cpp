// Last updated: 5/16/2026, 7:23:46 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;

        for(int i = 0;i<words.size();i++){
            for(char n:words[i]){
                if(n==x){
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
    }
};