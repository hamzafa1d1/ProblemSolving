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

    vector<pair<int, int>> events;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        events.emplace_back(a, 1);  
        events.emplace_back(b, -1); 
    }

    sort(events.begin(), events.end());

    int max_customers = 0;
    int current_customers = 0;

    for (const auto& event : events) {
        current_customers += event.second;
        max_customers = max(max_customers, current_customers);
    }

    cout << max_customers << '\n';
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}