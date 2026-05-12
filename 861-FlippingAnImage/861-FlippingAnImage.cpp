// Last updated: 5/12/2026, 2:40:32 PM
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
      for(int i =0;i<image.size();i++){
        reverse(image[i].begin(),image[i].end());

        for(int j =0;j<image[i].size();j++){
            image[i][j]=1-image[i][j];
        }
      }
      return image;
    }
};