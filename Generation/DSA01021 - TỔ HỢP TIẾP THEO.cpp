#include<bits/stdc++.h>
using namespace std ; 
#define faster() ios::sync_with_stdio(false) ; cin.tie(0) ;

bool ok = true ; 

void sinh(int n , int a[] , int k){
	int i = k - 1 ; 
	while(i>=0 && a[i] == n - k + i + 1) i-- ; 
	if(i >= 0) {
	  a[i]++ ; 
	  for(int j = i + 1 ; j < k ; j++){
		a[j] = a[j-1] + 1 ; 
	  }
    }
    else ok = false ; 
}

void solve(int n , int a[] , int k){
	set<int> se ; 
	for(int i = 0 ; i < k ;i++){
		se.insert(a[i]) ; 
	}
	int m = se.size() ; 
	sinh(n,a,k) ; 
	for(int i = 0 ; i < k ; i++){
		se.insert(a[i]) ; 
	}
	if(ok){
	cout << se.size() - m << endl ; 
    } 
    else cout << k << endl ; 
	
}

int main()
{
	int t  ; 
	cin >> t ; 
	while(t--){
		ok = true ; 
		int n,k ; 
		cin >> n >> k ; 
		int a[k] ; 
		for(int i = 0 ; i < k ; i++ ){
			 cin >> a[i] ; 
		}
		solve(n,a,k) ; 
		
    }
}
