#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniqueLetterString(string s) {
        if (s.size() == 0) {
            return 0;
        }
        vector<vector<int>> lastTwoIndex(26);
        int prev = 1;
        int result = 1;
        int mod = pow(10, 9) + 7;
        lastTwoIndex[s[0] - 'a'].push_back(0);
        for (int i = 1; i < s.size(); ++i) {
            int lastIndex = -1, secLastIndex = -1;
            int idx = s[i] - 'a';
            if (lastTwoIndex[idx].size() == 1) {
                lastIndex = lastTwoIndex[idx][0];
            } else if (lastTwoIndex[idx].size() == 2) {
                lastIndex = lastTwoIndex[idx][1];
                secLastIndex = lastTwoIndex[idx][0];
            }
            int curr = (prev + (i - lastIndex) - (lastIndex - secLastIndex)) % mod;
            result = (result + curr) % mod;
            prev = curr;
            if (lastTwoIndex[idx].size() < 2) {
                lastTwoIndex[idx].push_back(i);
            } else {
                lastTwoIndex[idx][0] = lastTwoIndex[idx][1];
                lastTwoIndex[idx][1] = i;
            }
        }
        return result;
    }
};
main() {
    Solution ob;
    cout << (ob.uniqueLetterString("aabb"));
}