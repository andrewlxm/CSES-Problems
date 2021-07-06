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
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define vi vector<int>
const int N = 1e9 + 7;

void solve() {
    int n; cin >> n;
    int *a = new int[n];
    for (int i = 1;i<=n-1;i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    if (n == 2 && a[0] == 1) cout << 2 << endl;
    else if (a[n-1] == n-1) 
    {
        cout << n << endl;
    }
    else {
    for (int i = 1;i<=n-1;i++) {
        if (a[i] != i) {
            cout << i << endl;
            break;
        }
    }
    }
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
