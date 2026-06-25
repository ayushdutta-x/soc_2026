#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
vector<ll> a;
ll total;
ll ans = LLONG_MAX;

void solve(int i, ll sum) {
    if (i == n) {
        ans = min(ans, abs(total - 2 * sum));
        return;
    }

    solve(i + 1, sum + a[i]);
    solve(i + 1, sum);
}

int main() {
    cin >> n;
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    solve(0, 0);

    cout << ans << endl;
}