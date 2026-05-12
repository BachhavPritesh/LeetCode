// Last updated: 5/12/2026, 2:39:24 PM
class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n)+to_string(n*2)+to_string(n*3);
        set<char> st;

        for(char c:s){
            if(c=='0'){
                return false;
            }
            else if(st.count(c)){
                return false;
            }
            st.insert(c);
        }

        return st.size()==9;
    }
};