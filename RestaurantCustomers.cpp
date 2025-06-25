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
    ll n ; 
    cin >> n; 
    vector<pair<int,int>> v;
    for(int i = 0 ; i<n ;i ++){
        ll x , y  ;
        cin >> x >>y ; 
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), [](const pair<int,int>& a, const pair<int,int>& b){
        return a.second < b.second;
    } );

    ll  y = v[0].second;
    ll i =1, ans = 1;;
    while (i<n){
        if(v[i].first >= y){
            ans ++;
            y = v[i].second;
        }
        i++;
    }
    cout << ans<< '\n';
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}