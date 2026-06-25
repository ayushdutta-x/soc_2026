#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)


int main() {
    fastio();

    int n;
    cin >> n;
    vector<pair<long long, long long>> movies;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        movies.push_back({b, a}); 
    }

    sort(movies.begin(), movies.end());

    long long last_end = 0;
    int count = 0;

    for (auto [end, start] : movies) {
        if (start >= last_end) {
            count++;
            last_end = end;
        }
    }

    cout << count << endl;
}