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
const int MOD = 1e9 + 7;
void solve() {
    ll n; 
    cin >> n; 
    vector<ll> v; 
    map<ll,ll> mp;
    for(ll i =0 ; i< n ;i ++){
        ll x; 
        cin >> x; 
        v.push_back(x);
    }
    ll start = 0, ans = 0 ; 
    for( ll i =0 ; i<n ;i ++){
        if(mp.find(v[i]) == mp.end()){
            mp[v[i]] = i;
        }
        else{
            if(mp[v[i]] >= start){
                start = mp[v[i]] + 1;
            }
            mp[v[i]] = i;
        }
        ans = max(ans, i-start + 1);
    }
    cout << ans << '\n';
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}