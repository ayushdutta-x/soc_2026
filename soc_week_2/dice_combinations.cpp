#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

const int MOD = 1e9 + 7;

vector<int> dp;

int solve(int n) {
    fastio();
    
    if (n == 0) return 1;
    if (n < 0) return 0;

    if (dp[n] != -1) return dp[n];

    long long ways = 0;

    for (int i = 1; i <= 6; i++) {
        ways = (ways + solve(n - i)) % MOD;
    }

    return dp[n] = ways;
}

int main() {
    int n;
    cin >> n;

    dp.resize(n + 1, -1);

    cout << solve(n) << endl;
}