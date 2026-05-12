// Last updated: 5/12/2026, 2:40:30 PM
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> res;
        map<string,int> m;

        string c = s1 + " "+ s2;

        stringstream ss(c);
        string word;

        while(ss>>word){
            m[word]++;
        }

        for(auto i:m){
            if(i.second==1){
                res.push_back(i.first);
            }
        }

        return res;
        
    }
};