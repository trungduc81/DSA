#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

void sinh(int n, vector<char> &a) {
    int k = a.size();
    int m = k - 1;
    while (m >= 0 && a[m] == 'A' + (n - k + m)) m--; 
    if (m >= 0) {
        a[m]++; 
        for (int i = m + 1; i < k; i++) {
            a[i] = a[i - 1] + 1; 
        }
    }
}

void solve(int n, int k) { 
    vector<char> a(k);
    for (int i = 0; i < k; i++) {
        a[i] = 'A' + i; 
    }

    int m = 1;
    for (int i = 0; i < k; i++) {
        m = m * (n - i) / (i + 1); 
    }

    for (int i = 0; i < m; i++) {
        for (char j : a)
            cout << j;
        cout << endl;
        sinh(n, a);
    }    
}

int main() {    
    faster();
    int t; 
    cin >> t; 
    while (t--) {
        int n, k; 
        cin >> n >> k; 
        solve(n, k); 
    }
}

