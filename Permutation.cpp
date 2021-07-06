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
    int n; 
    cin >> n;
    if (n==1) cout << 1 << endl;
    else if (n<=3) cout << "NO SOLUTION" << endl;
    else if (n==4) cout << 2 << " " << 4 << " " << 1 << " " << 3 << endl;
    else {
        for (int i = 1; i<=n;i+=2) {
            cout << i << " ";
        }
        for (int i = 2; i<=n;i+=2) {
            cout << i << " ";
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
