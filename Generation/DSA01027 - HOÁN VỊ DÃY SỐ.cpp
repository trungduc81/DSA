#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

void solve(int a[] , int n){
	sort(a,a+n) ; 
	int m = 1 ; 
	for(int i = 1 ; i <= n ; i++ ){
		m *= i ;
	}
	for(int i = 0 ; i < m ; i++ ){
		for(int j = 0 ; j < n ;j++ ){
			cout << a[j] << " " ; 
		}
		cout << endl ; 
		next_permutation(a,a+n) ; 
	}
}

int main() {    
        faster();
        int n ; 
        cin >> n ; 
        int a[n] ;
        for(int i = 0 ; i < n ; i++ ){
        	cin >> a[i] ; 
		}
        solve(a,n); 
}

