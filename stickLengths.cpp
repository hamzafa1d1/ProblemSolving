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
    int n;
    cin >> n;
    vector<ll> sticks(n);
    for (int i = 0; i < n; ++i) {
        cin >> sticks[i];
    }

    sort(sticks.begin(), sticks.end());

    ll median = sticks[n / 2];
    ll total_cost = 0;

    for (int i = 0; i < n; ++i) {
        total_cost += abs(sticks[i] - median);
    }

    cout << total_cost << '\n';
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}