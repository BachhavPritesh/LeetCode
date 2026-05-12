// Last updated: 5/12/2026, 2:39:49 PM
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index = 0;
        int count = 0;
        if(ruleKey == "type"){
            index=0;
        }
        else if(ruleKey == "color"){
            index=1;
        }
        else{
            index=2;
        }

        for(auto& it:items){
            if(it[index]==ruleValue){
                count++;
            }
        }

        return count;
    }
};