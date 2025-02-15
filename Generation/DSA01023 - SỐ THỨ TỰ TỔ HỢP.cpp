#include<bits/stdc++.h>
using namespace std ; 
#define faster() ios::sync_with_stdio(false) ; cin.tie(0) ;
#define ll long long

void sinh(int n, vector<int> &a) {
    int k = a.size();
    int m = k - 1;
    while (m >= 0 && a[m] == n - k + m + 1) m--; 
    if (m >= 0) {
        a[m]++;
        for (int i = m + 1; i < k; i++) {
            a[i] = a[i - 1] + 1; 
        }
    }
}


ll giaithua(int n){
	ll m = 1 ; 
	for(int i = 1 ; i <= n ; i++ ){
		m *= i ; 
	}
	return m ; 
}

void solve(int n , vector<int> &b ){
	int k = b.size() ;
	vector<int> a(k) ;   
	int dem = 1 ; 
	for(int i = 1 ; i <= k ; i++){
		a[i-1] = i ; 
	}
	for(int i = 0 ; i < giaithua(n) ;i++){
		if(a==b) {
		 cout << dem << endl ; 
		 break ; 
    	}
		else {
			sinh(n,a) ; 
			dem++ ; 
		}
	}	
}

int main()
{    
    faster() ; 
	int t  ; 
	cin >> t ; 
	while(t--){
		int n , k ; 
		cin >> n >> k ; 
		vector<int> b(k) ; 
		for(int i = 0 ; i < k ; i++ ){
			 cin >> b[i] ; 
		}
		solve(n,b) ; 
		
    }
}
