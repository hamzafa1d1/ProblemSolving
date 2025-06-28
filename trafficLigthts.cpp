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

    int x, n;
    cin >> x >> n;

    set<int> positions;
    multiset<int> gaps; 

    positions.insert(0);
    positions.insert(x);
    gaps.insert(x);

    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;

        auto it = positions.upper_bound(p);
        int right = *it;
        int left = *prev(it);

        gaps.erase(gaps.find(right - left));

        gaps.insert(p - left);
        gaps.insert(right - p);

        positions.insert(p);

        cout << *gaps.rbegin() << " ";
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