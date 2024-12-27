class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int res = 0, cur = 0;
        for (int a: v) {
            res = max(res, cur + a);
            cur = max(cur, a) - 1;
        }
        return res;
    }
};