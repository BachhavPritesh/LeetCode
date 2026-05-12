// Last updated: 5/12/2026, 2:41:32 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i =0;i<matrix.size();i++){
            for(int j = i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i = 0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
      
    }
};