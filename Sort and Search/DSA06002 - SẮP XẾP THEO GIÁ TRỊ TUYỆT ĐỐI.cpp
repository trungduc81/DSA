#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(false) ; cin.tie(0) ;

int k; 
bool compare(int a, int b) {
    return abs(a - k) < abs(b - k);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n >> k; 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        stable_sort(a.begin(),a.end(),compare);
        for (int x : a) {
            cout << x << " ";
        }
        cout << endl ; 
    }
}

