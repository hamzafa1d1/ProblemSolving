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

struct Customer {
    int arrival, departure, index;
};

void solve()
{
    int n;
    cin >> n;
    vector<Customer> customers(n);

    for (int i = 0; i < n; i++) {
        cin >> customers[i].arrival >> customers[i].departure;
        customers[i].index = i;
    }

    // Sort by arrival day
    sort(customers.begin(), customers.end(), [](auto &a, auto &b) {
        return a.arrival < b.arrival;
    });

    // Min-heap: {departure_time, room_number}
    priority_queue<pii, vector<pii>, greater<>> pq;

    vector<int> room_assign(n);
    int room_count = 0;

    for (auto &c : customers) {
        if (!pq.empty() && pq.top().first < c.arrival) {
            // Reuse room
            auto [dep, room] = pq.top(); pq.pop();
            room_assign[c.index] = room;
            pq.push({c.departure, room});
        } else {
            // Allocate new room
            room_count++;
            room_assign[c.index] = room_count;
            pq.push({c.departure, room_count});
        }
    }

    cout << room_count << "\n";
    for (int i = 0; i < n; i++) {
        cout << room_assign[i] << " ";
    }
    cout << "\n";
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
