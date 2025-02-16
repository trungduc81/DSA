#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

int main() {  
    faster(); 
    
    int t ; 
    cin >> t ; 
    while(t--) { 
        int n; 
        cin >> n; 
        int a[n]; 
        multiset<int> se; 
        
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
            se.insert(a[i]); 
        }
        
        for (int i : se) cout << i << " "; 
        cout << endl;  
    }        
}
