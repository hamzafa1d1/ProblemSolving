#include <bits/stdc++.h>
using namespace std;

// Uncomment these for large inputs or when optimization is needed
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// Shortcuts for common data types
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Constants
const int INF = 1e9;
const ll LLINF = 4e18;
const int MOD = 1e9+7;

void solve( ) {
    ll n, sum = 0, ans = -LLINF; 
    cin >> n; 
    vector<ll> v; 
    for(ll i =0  ; i<n ; i++){
        ll x; 
        cin >> x; 
        v.push_back(x);
    }

    for(ll i = 0 ; i< n ;i ++){
        sum = max(v[i], sum + v[i]);
        ans = max(ans, sum);
    }
    cout << ans << '\n';
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}