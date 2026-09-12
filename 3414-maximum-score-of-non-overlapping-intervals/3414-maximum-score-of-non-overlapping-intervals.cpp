class Solution {
public:
    struct State {
        long long score;
        vector<int> ids;
    };
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<array<int, 4>> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = {intervals[i][0], intervals[i][1],
                    intervals[i][2], i};
        }
        sort(a.begin(), a.end());
        vector<int> nxt(n);
        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n;
            while (left < right) {
                int mid = left + (right - left) / 2;
                if (a[mid][0] > a[i][1])right = mid;
                else left = mid + 1;
            }
            nxt[i] = left;
        }
        vector<vector<State>> dp(n + 1, vector<State>(5));
        for (int i = n - 1; i >= 0; i--) {
            for (int taken = 1; taken <= 4; taken++) {
                State best = dp[i + 1][taken];
                State take;
                take.score = a[i][2];
                take.ids.push_back(a[i][3]);
                if (nxt[i] < n && taken > 1) {
                    take.score += dp[nxt[i]][taken - 1].score;
                    take.ids.insert(take.ids.end(),dp[nxt[i]][taken - 1].ids.begin(),dp[nxt[i]][taken - 1].ids.end());
                }
                sort(take.ids.begin(), take.ids.end());
                if (take.score > best.score ||
                    (take.score == best.score && take.ids < best.ids)) {
                    best = take;
                }
                dp[i][taken] = best;
            }
        }
        return dp[0][4].ids;
    }
};