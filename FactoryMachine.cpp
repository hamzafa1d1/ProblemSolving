#include <bits/stdc++.h>
using namespace std;

// Shortcuts
typedef long long ll;
typedef vector<ll> vll;

void solve() {
    int n;
    ll t;
    cin >> n >> t;
    vll k(n);
    for (int i = 0; i < n; i++) cin >> k[i];

    ll low = 1;
    ll high = *min_element(k.begin(), k.end()) * t;
    ll ans = high;

    while (low <= high) {
        ll mid = low + (high - low) / 2;

        // Count how many products we can make in mid seconds
        __int128 cnt = 0; // prevent overflow
        for (ll time : k) {
            cnt += mid / time;
            if (cnt >= t) break; // optimization: stop early
        }

        if (cnt >= t) {
            ans = mid;
            high = mid - 1; // try smaller time
        } else {
            low = mid + 1;  // need more time
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
