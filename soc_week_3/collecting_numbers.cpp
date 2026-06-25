#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

int main() {
    fastio();
    int n;
    cin >> n;

    vector<pair<int, int>> events;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }
    int cc = 0;
    int maxc = 0;
    sort(events.begin(), events.end());
    for (auto p : events) {
        cc += p.second;
        if (cc > maxc) maxc = cc;
    }
    cout << maxc << '\n';
    return 0;
}