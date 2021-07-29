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
 
 
 
void solve() {
   ll a, b;
   cin >> a >> b;
   if ((2*a-b) >= 0 && (2*a - b) % 3 == 0 && (2*b - a) >= 0 && (2*b-a) % 3 == 0) cout << "YES" << endl;
   else cout << "NO" << endl;
}
 
int main() {
	fast;
    int t = 1; cin >> t;
    while(t--) solve();
}
