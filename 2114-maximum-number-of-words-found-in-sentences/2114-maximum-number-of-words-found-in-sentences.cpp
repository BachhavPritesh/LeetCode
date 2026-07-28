class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for(string s:sentences){
            int word =1;
            for(int c:s){
                if(c==' '){
                    word+=1;
                }
            }

            maxWords = max(maxWords,word);
        }

        return maxWords;
    }
};