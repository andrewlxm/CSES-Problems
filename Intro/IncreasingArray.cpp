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
const int N = 1e9 + 7;

void solve() {
   lli n;
    cin >> n;
    lli arr[n];
    for (lli i = 0; i < n; i++)
        cin >> arr[i];
    lli total = 0, m = arr[0];
    for (lli i = 1; i < n; i++)
    {
        total += max(0LL, m - arr[i]);
        m = max(m, arr[i]);
    }
    cout << total;

}    

int main() {
	fast;
    /* int t; cin >> t;
   while (t--)
   {
       
    solve();
   } */
   solve();
   
}
