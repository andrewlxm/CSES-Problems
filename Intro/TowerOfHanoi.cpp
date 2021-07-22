#include <iostream>
#include <algorithm>

using namespace std;
void TowerofHanoi(char a, char b, char c, int n);

void TowerofHanoi(char a, char b, char c, int n) {
    int cnt = 0;
    if (n==1) {
        cout << a << " "<< c << endl; 
    } else {
        TowerofHanoi(a,c,b,n-1);
        cout << a << " " << c << endl;
        TowerofHanoi(b,a,c,n-1); 
    }
}


int main() {
    int n ; cin >> n;
    cout << (1<<n) << endl;
    //TowerofHanoi('1','2','3',n);
}
