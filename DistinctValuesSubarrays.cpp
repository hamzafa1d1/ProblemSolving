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

void solve()
{
    ll n; 
    cin >> n; 
    vector<ll> v; 
    map<ll, ll> mp;
    for(int i =0 ; i< n;i ++){
        ll x; 
        cin >> x;
        v.push_back(x);
    }
    ll i = 0 , j =0, ans =0; 
    while(j<n){
        if(mp.find(v[j]) != mp.end()){
            if(mp[v[j]] >=i){
                i = mp[v[j]] + 1;
            }
        }
        mp[v[j]] = j;
        ans += (j-i) + 1;
        j++;
    }
    cout << ans <<'\n';
    
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