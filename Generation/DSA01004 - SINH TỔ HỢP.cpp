#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

void sinh(int n , int a[] , int k){
	int i = k - 1 ; 
	while(i>=0 && a[i] == n- k +i + 1) i-- ; 
	if(i>=0) a[i]++ ; 
	for(int j = i + 1 ; j < k ; j++){
		a[j] = a[j-1]+ 1 ; 
	}
}

ll giaithua(int n){
	ll tich = 1 ; 
	for(int i = 1 ; i <= n ; i++){
		tich *= i ; 
	}
	return tich ; 
}

void solve(int n , int k ){
	int m = giaithua(n)/(giaithua(k) * giaithua(n-k)) ; 
	int a[k] ; 
	for(int i = 0 ; i < k ; i++){
		a[i] = i + 1 ; 
	}
	for(int i = 0 ; i < m  ; i++){
		for(int j = 0 ; j < k ; j++){
			cout << a[j]  ; 
		}
		cout << " " ; 
		sinh(n,a,k) ; 
	}
	cout << endl ; 
}

int main()
{
	ios::sync_with_stdio(false) ; 
	cin.tie(0) ; 
	
	int t ;
	cin >> t ;  
	while(t--){
		int n,k ; 
		cin >> n >> k ; 
		solve(n,k) ; 
	}
	return 0 ; 
}
