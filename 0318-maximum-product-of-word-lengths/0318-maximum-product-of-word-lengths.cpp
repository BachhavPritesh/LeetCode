class Solution {
public:
    int maxProduct(vector<string>& words) {
        int product = 0;
        int n = words.size();

        vector<int> mask(26 * n, 0);

        for (int i = 0; i < n; i++) {
            for (char c : words[i]) {
                mask[(26 * i) + (c - 'a')]++;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                bool common = false;

                for (int k = 0; k < 26; k++) {
                    if (mask[(26 * i) + k] &&
                        mask[(26 * j) + k]) {

                        common = true;
                        break;
                    }
                }

                if (!common) {
                    int curr =
                        words[i].size() *
                        words[j].size();

                    product = max(product, curr);
                }
            }
        }

        return product;
    }
};