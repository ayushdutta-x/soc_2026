// #1 : Weird Algorithm
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        while (true){
            cout<< n << " ";
            if (n==1) break;
            n = (n&1) ? (3*n+1) : (n/2);
        }
    }

    return 0;
}



// #2 : Missing Number
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    //cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll x = n;
        for (int i = 1; i < n; i++){
            ll m;
            cin >> m;
            x^=i;
            x^=m;
        }
        cout<<x;
    }

    return 0;
}



// #3 : Number Spiral
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    cin >> t;

    while (t--) {
        ll x,y;
        cin>>y>>x;
        ll n  = max(y,x);
        ll v = (n%2 == 0) ? (n*n - (x-1) - (n-y)) : (n*n - (y - 1) - (n-x));
        cout<<v<<'\n';
    }
    return 0;
}



//#4 : Kadane's Algo
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

ll maxsubarraysum(vector<ll>& a) {
    ll p = a[0];
    ll q = a[0];

    for (size_t i=1;i< a.size();i++){
        p = max(a[i],p + a[i]);
        q = max(q,p);
    }
    return q;
}

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll &x : a) cin >> x;

        cout<<maxsubarraysum(a)<<'\n';
    }

    return 0;
}




//#5 : Subarray Sums I 
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long


int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll &x : a) cin >> x;

        ll sum = 0,l =0,c=0;

        for (ll r = 0;r<n;r++){
            sum += a[r];
            while (sum > x) sum -= a[l++];
            if (sum == x) c++;
        }
        cout << c <<'\n';
    }

    return 0;
}

//#6 : Distinct Numbers
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);

        for (ll i = 0;i<n ; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        ll c = 1;
        for (ll i=1;i<n;i++){
            if (a[i] != a[i-1]) c++;
        }
        cout<<c<<'\n';
    }
    return 0;
}


//#7 : Apartments
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n,m,k;
        cin >> n >> m >> k;

        vector<ll> a(n);
        for (ll &x : a) cin >> x;
        sort(a.begin(),a.end());

        vector<ll> b(m);
        for (ll &x : b) cin >> x;
        sort(b.begin(),b.end());

        ll i=0,j=0;
        ll c = 0;

        while (i<n & j<m){
            if (b[j] < a[i]-k) j++;
            else if (b[j] > a[i] + k) i++;
            else{
                c++;
                i++;
                j++;
            }
        }
        cout << c << '\n';
    }

    return 0;
}


//#8. Ferris Wheel
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n,x;
        cin >> n >> x;

        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.begin(),a.end());
        
        int i = 0,j=n-1,c=0;

        while (i < j){
            if (a[i] + a[j] <= x){
                i++;
                j--;
            }
            else{
                j--;
            }
            c++;
        }
        if (i==j) c++;
        cout << c <<'\n';
    }
    return 0;
}


//#9 : Concert Tickets
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n,m;
        cin >> n >> m;

        multiset<ll>s;

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            s.insert(x);
        }

        for (ll i = 0; i < m; i++) {
            ll t;
            cin >> t;

            auto it = s.upper_bound(t);

            if (it == s.begin()) {
                cout << -1 << '\n';
            } else {
                --it;
                cout << *it << '\n';
                s.erase(it);
            }
        }
    }
    return 0;
}



//#10 : Playlist
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        map<ll,ll> last;
        ll l = 0,c=0;
        for(int r = 0;r<n;r++){
            ll song;
            cin>>song;
            if(last.count(song) && last[song] >=l) l = max(l,last[song]+1);
            last[song] = r;          

            c = max(c,r-l+1);
        }
        cout << c << '\n';
    }

    return 0;
}



//#11 : Towers
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        multiset<ll> tops;
        for (int i = 0;i <n ;i++){
            int k;
            cin>>k;
            auto it = tops.upper_bound(k);
            if (it!= tops.end()){
                tops.erase(it);
            }
            tops.insert(k);
        }
        cout<<tops.size()<<'\n';
    }
    return 0;
}




//#12 : Traffic Lights
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        ll x, n;
        cin >> x >> n;

        set<ll> lights;       
        multiset<ll> gaps;    

        lights.insert(0);
        lights.insert(x);
        gaps.insert(x);

        for (int i = 0; i < n; i++) {
            ll p;
            cin >> p;
            lights.insert(p);
            auto it = lights.find(p);
            ll right = *next(it);
            ll left  = *prev(it);

            gaps.erase(gaps.find(right - left));
            gaps.insert(p - left);
            gaps.insert(right - p);

            cout << *gaps.rbegin();
            if (i < n - 1) cout << " ";
        }
        cout << '\n';
    }

    return 0;
}

