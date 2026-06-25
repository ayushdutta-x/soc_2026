#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i++) {
        cin >> movies[i].first >> movies[i].second;
    }
    sort(movies.begin(), movies.end(), [](auto& a, auto& b) { return a.second < b.second; });

    multiset<int> endTimes;

    for (int i = 0; i < k; i++) {
        endTimes.insert(0);
    }

    int ans = 0;

    for (auto [start, end] : movies) {
        auto it = endTimes.upper_bound(start);

        if (it == endTimes.begin()) {
            continue;
        }

        --it;

        endTimes.erase(it);
        endTimes.insert(end);

        ans++;
    }

    cout << ans << "\n";
}