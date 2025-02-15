#include<bits/stdc++.h>
using namespace std ; 

void sinh(int a[] , int n){
	int i = n - 1 ; 
	while(i>=0 && a[i] == 1){
		a[i] = 0 ; 
		i-- ; 
	}
	if(i>=0) a[i] = 1 ;
}

void in(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		cout << a[i] << " " ; 
	}
	cout << endl ; 
}

void solve(int n){
	int m = (n+1)/2 ; 
	int f = pow(2,m) ; 
	int a[m] ; 
	for(int i = 0 ; i < m ; i++){
		a[i] = 0 ; 
	}
	 
	for(int j = 0 ; j < f ; j++){
		int b[n] ; 
		for(int i = 0 ; i < m ; i++){
			b[i] = a[i] ; 
			b[n-i-1] = a[i] ; 
		}
		in(b,n) ; 
		sinh(a,m) ; 
		
	}
}

int main()
{
	ios::sync_with_stdio(false) ; 
	cin.tie(0) ; 
	
	int n ; 
	cin >> n ; 
	solve(n) ; 
	return 0 ; 
}
