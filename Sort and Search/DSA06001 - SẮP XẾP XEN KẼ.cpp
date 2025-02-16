#include <bits/stdc++.h>
using namespace std;

void sx(int a[], int n) {
    sort(a,a+n); 
    int l = 0, r = n - 1;
    vector<int> ve; 
    while (l <= r) {
        if (l != r) { 
            ve.push_back(a[r]); 
            ve.push_back(a[l]); 
        } else {
            ve.push_back(a[l]); 
        }
        l++;
        r--;
    }
     for (int i = 0; i < ve.size(); i++) {
        cout << ve[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sx(a,n);
    }
}

