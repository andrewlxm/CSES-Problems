#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <chrono>
#include <ctime>
using namespace std;
using namespace std::chrono;
typedef long long ll;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define vi vector<int>
const int N = 1e5;
const ll MOD = 1e9 + 7;
int n, tmp=-1e5;

ll pow2(ll a, ll b) {
    if (b == 0) {
        return 1;
    }
    ll res = pow2(a,b/2);
    if (b%2) {
        return res*res*a;
    } else {
        return res*res;
    }
}

void solve() {
    ll n; cin >> n;
    ll res = 1;
    for (int i = 1;i<=n;i++) {
        res = (res*2) % MOD;
    }
    cout << res << endl;
}

int main() {
	fast;
    int t = 1; //cin >> t;
    while(t--) solve();
}
