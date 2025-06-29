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
    vector<ll> a;
    map<ll, ll> last;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    ll total = 1;

    for (int i = 0; i < n; ++i)
    {
        long long new_total = (total * 2) % MOD;
        if (last.count(a[i]))
        {
            new_total = (new_total - last[a[i]] + MOD) % MOD;
        }
        last[a[i]] = new_total;
        total = new_total;
    }

    cout << (total - 1 + MOD) % MOD << endl;
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