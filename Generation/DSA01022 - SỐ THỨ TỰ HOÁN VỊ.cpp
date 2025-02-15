#include<bits/stdc++.h>
using namespace std ; 
#define faster() ios::sync_with_stdio(false) ; cin.tie(0) ;

void solve(int n , vector<int> &b ){
	vector<int> a(n) ;  
	int dem = 1 ; 
	for(int i = 1 ; i <= n ; i++){
		a[i-1] = i ; 
	}
	int m = 1 ; 
	for(int i = 1 ; i <= n ; i++ ){
		m *= i ;
	}
	for(int i = 0 ; i < m ;i++){
		if(a==b) {
		 cout << dem << endl ; 
		 break ; 
    	}
		else {
			next_permutation(a.begin() , a.end()) ; 
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
		int n ; 
		cin >> n  ; 
		vector<int> b(n) ; 
		for(int i = 0 ; i < n ; i++ ){
			 cin >> b[i] ; 
		}
		solve(n,b) ; 
		
    }
}
