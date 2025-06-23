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
   int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    for (int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        tickets.insert(h);
    }

    for (int i = 0; i < m; ++i) {
        int t;
        cin >> t;
        auto it = tickets.upper_bound(t);
        if (it != tickets.begin()) {
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        } else {
            cout << "-1\n";
        }
    }
    
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