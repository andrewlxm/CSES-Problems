#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
const int N = 1e5;
int tmp=-1e5;
int F[N];
int a[N];
int b[N];
//-----------------------------------------------------------------------------

void solve() {
    int n,m,k;
    cin >> n >> m >> k;
    for (int i = 0;i<n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i<m;i++) {
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j] )<= k) {
            i++; j++;
            cnt++;
        }
        else {
            if (a[i] - b[j] > k) {
                j++;
           }
           else i++;
        }
    }
    cout << cnt << endl;
} 


int main() {
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t = 1; //cin >> t;
    while(t--) solve();
}
