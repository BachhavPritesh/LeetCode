// Last updated: 5/12/2026, 2:39:36 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        
        for(string s : sentences){
            int word = 1;

            for(char c : s){
                if(c==' '){
                    word+=1;
                }

            }

            maxWords = max(maxWords,word);
        }

        return maxWords;
    }
};