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
    ll total = n * (n + 1) / 2;
    if (total % 2 != 0) {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
    ll half = total / 2;
    vector<ll> set1, set2;
    for (ll i = n; i >= 1; --i) {
        if (i <= half) {
            set1.push_back(i);
            half -= i;
        } else {
            set2.push_back(i);
        }
    }
    cout << set1.size() << '\n';
    for (auto x : set1) {
        cout << x << ' ';
    }
    cout << '\n';
    cout << set2.size() << '\n';
    for (auto x : set2) {
        cout << x << ' ';
    }
    cout << '\n';
    
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