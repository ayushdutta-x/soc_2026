#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio();

    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<ll> tails;

    for (ll x : arr) {
        auto it = lower_bound(tails.begin(), tails.end(), x);

        if (it == tails.end()) {
            tails.push_back(x);
        } else {
            *it = x;
        }
    }

    cout << tails.size() << endl;
}