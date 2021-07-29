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
 
ll answer(ll x, ll y) {
  ll mx = max(x,y);
   if (x%2==0) {
     if (y == 1) {
       return mx*mx;
     } else if (x < mx) {
       return answer(mx,mx) - (mx - x);
     } else if (x == mx) {
       return (mx*mx - (y -1));
     }
   } else {
        if (x == 1) {
          return mx*mx;
        } else if (y < mx) return answer(mx, mx) - (mx - y);
        else if (y == mx) return mx*mx - (x-1);
   }
}
 
void solve() {
   ll x,y;
   cin >> x >> y;
   ll res;
   if (x<y) {
     if (y%2 != 0) {
       res = y*y -x +1;
     } else {
       res = (y-1)*(y-1) +x;
     }
     cout << res << endl;
   } 
   else {
     if (x %2 != 0) {
       res = (x-1)*(x-1) + y;
     } else {
       res = x*x -y+1;
     }
     cout << res << endl;
   }
}
 
 
int main() {
	fast;
    int t = 1; cin >> t;
    while(t--) solve();
}
