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
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, ans;
        cin >> x >> y;
        if (y >= x)
        {
            if (y % 2 == 1)
            {
                ans = (y * y) - (x - 1);
            }
            else
            {
                ans = (y - 1) * (y - 1) + x;
            }
        }
        else
        {
              if (x % 2 == 0)
            {
                ans = (x * x) - (y - 1);
            }
            else
            {
                ans = (x - 1) * (x - 1) + y;
            }
        }

        cout << ans << '\n';
    }
    return;
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