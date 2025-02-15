#include <bits/stdc++.h>
using namespace std;

void sinh(string &s) {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    if (i >= 0) s[i] = '1';
}

void check(int n, int k) {
    int m = (1 << n); 
    string s(n, '0'); 
    
    vector<string> ve;
    for (int i = 0; i < m; i++) {
        ve.push_back(s);
        sinh(s);
    }

    vector<int> dem(m, 0); 

    for (int i = 0; i < m; i++) {
        for (char c : ve[i]) {
            if (c == '1') {
                dem[i]++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if (dem[i] == k) {
            cout << ve[i] << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        check(n, k);
    }

    return 0;
}

