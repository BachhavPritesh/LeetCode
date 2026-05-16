// Last updated: 5/16/2026, 7:23:54 PM
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
       sort(asteroids.begin(), asteroids.end());

        long long m = mass;

        for (int n : asteroids) {
            if (m >= n) {
                m += n;
            } else {
                return false;
            }
        }

        return true;
    }
};