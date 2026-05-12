// Last updated: 5/12/2026, 2:38:52 PM
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int e = INT_MAX;
        for(auto& task:tasks){
            int f = task[0]+task[1];
            e=min(e,f);
        }
        return e;
    }
};