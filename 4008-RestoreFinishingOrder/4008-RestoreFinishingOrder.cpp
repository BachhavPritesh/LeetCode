// Last updated: 5/12/2026, 2:38:54 PM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> fset(friends.begin(),friends.end());
        vector<int> res;

        for(int id:order){
            if(fset.count(id)){
                res.push_back(id);
            }
        }
        return res;
    }
};