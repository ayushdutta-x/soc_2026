#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 1e6;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> queries(t);
    int max_n = 0;

    for (int i = 0; i < t; i++) {
        cin >> queries[i];
        max_n = max(max_n, queries[i]);
    }

    vector<vector<long long>> dp(max_n + 1, vector<long long>(2));

    dp[1][0] = 1;
    dp[1][1] = 1;

    for (int i = 2; i <= max_n; i++) {
        dp[i][0] = (2 * dp[i - 1][0] + dp[i - 1][1]) % MOD;
        dp[i][1] = (dp[i - 1][0] + 4 * dp[i - 1][1]) % MOD;
    }

    for (int n : queries) {
        cout << (dp[n][0] + dp[n][1]) % MOD << "\n";
    }
}