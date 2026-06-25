#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)


int main() {
    fastio();

    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;

    while (l < r) {
        long long sum = a[l].first + a[r].first;

        if (sum == x) {
            cout << a[l].second << " " << a[r].second << endl;
            return 0;
        } 
        else if (sum < x) {
            l++;
        } 
        else {
            r--;
        }
    }

    cout << "IMPOSSIBLE\n";
}