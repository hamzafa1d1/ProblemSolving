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
    ll n, x, ans =0; 
    vector<ll> v;
    cin >> n ;
    cin >> x;
    for(ll i = 0 ; i< n ; i++){
        ll p ; 
        cin >> p;
        if(p >=x){
            ans ++;
        }
        else{
            v.push_back(p);
        }

    }
    sort(v.begin(), v.end());
    ll i =0 , j = v.size() -1; 
    while(i<=j){
        if(i == j){
            ans ++ ;
            break;
        }
        if(v[i] + v[j] <=x){
            ans ++;
            i++ ; 
            j--;
        }
        else{
            ans ++;
            j--;
        }
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