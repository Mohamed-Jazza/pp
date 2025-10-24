// WE'LL BE WHERE WE'VE ALWAYS WANTED TO BE
// SOLVED BY # MOHAMED_JAZZA

#include "bits/stdc++.h"

#define outcont(x) for(auto e : x) out << e << " "
#define incont(x) for(auto& e : x) cin >> e
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using i64 = long long;
using namespace std;
ostringstream out;

constexpr int MOD = (int)1E9 + 7;

void solve() {
    int x, n;
    cin >> x >> n;
    int ans = 1;
    // x = gcd * segma_k
    for(int gcd = 1; gcd * gcd <= x; gcd++) {
        if(x % gcd == 0) {
            int d1 = x / gcd; // the first divisor
            int d2 = gcd; // the second divisor
            int k1 = x / d1;
            int k2 = x / d2;
            int ans1 = d1;
            int ans2 = d2;
            if(k1 % n) {
                ans1 *= k1 / n;
            }
            if(k2 % n) {
                ans2 *= k2 / n;
            }
            ans = max(ans1, ans2);
        }
    }
    out << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    cout << endl << out.str();
}
