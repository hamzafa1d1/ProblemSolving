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
    ll n, m, k;
    cin >> n;
    cin >> m;
    cin >> k;
    vector<ll> v1;
    vector<ll> v2;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        v2.push_back(x);
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    ll ans = 0, cur =0;
    int i = 0 , j = 0;
    while (i<n && j<m)
    {
       int left = v1[i]-k;
       int right = v1[i]+k;
       if(v2[j]>=left && v2[j]<=right){
            ++i;++j;++ans;continue;
       }
       if(v2[j]>right){
            ++i;continue;
       }
       ++j;
    }
    
    // for(ll i =0 ; i < m ; i++) {
    //     if(v2[i] >=(v1[cur] - k)  && v2[i] <= (v1[cur] +k) ){
    //         ans ++; 
    //         cur ++;
    //     }
    // }
    cout << ans ;

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