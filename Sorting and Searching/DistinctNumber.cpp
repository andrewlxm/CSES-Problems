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
    int n; cin >> n;
    int *a = new int[n];
    int tmp = N;
    for (int i = 0;i<n;i++) {
        cin >> a[i];
    }
    int res = 0;
    sort(a,a+n);
    if (n == 1) cout << 1 << endl;
    else {
       for (int i = 0;i<n;i++) {
           if (a[i] != tmp) res++;
           tmp = a[i];
        }
       cout << res << endl;
    }
    
}    

int main() {
	fast;
    //int t; cin >> t;
    //while (t--) solve();
    solve();
   
}
