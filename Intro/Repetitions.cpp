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
    string s;
    cin >> s;
    int cur = 0, pre = 0, max= 0;
    for (int i = 0;i<s.size();i++) {
        if (!(s[i] ^ pre)) {
            cur++;
        }
        else {
            if (cur > max) {
                max = cur;
            }
            cur = 1;
                pre = s[i];
        }
    }
    if (cur > max) {
        max = cur;
    }
    cout << max << endl;

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
