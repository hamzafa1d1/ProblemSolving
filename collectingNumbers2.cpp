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
    int n, m;
    cin >> n >> m;

    vi val(n + 1);   // val[pos] = value at pos
    vi pos(n + 1);   // pos[value] = position of value

    for (int i = 1; i <= n; ++i) {
        cin >> val[i];
        pos[val[i]] = i;
    }

    int rounds = 1;
    for (int i = 2; i <= n; ++i) {
        if (pos[i] < pos[i - 1])
            ++rounds;
    }

    while (m--) {
        int a, b;
        cin >> a >> b;

        int va = val[a];
        int vb = val[b];

        // Store affected values in a set
        set<int> affected;
        for (int d = -1; d <= 1; ++d) {
            if (1 <= va + d && va + d <= n) affected.insert(va + d);
            if (1 <= vb + d && vb + d <= n) affected.insert(vb + d);
        }

        // Remove old breakpoints
        for (int x : affected) {
            if (x > 1 && pos[x] < pos[x - 1]) --rounds;
        }

        // Swap the values in val[]
        swap(val[a], val[b]);

        // Update their positions
        pos[va] = b;
        pos[vb] = a;

        // Add new breakpoints
        for (int x : affected) {
            if (x > 1 && pos[x] < pos[x - 1]) ++rounds;
        }

        cout << rounds << '\n';
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