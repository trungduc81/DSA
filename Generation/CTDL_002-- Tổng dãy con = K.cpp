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

void solve(int b[] ,int n , int k ){
	int a[n] ; 
	for(int i = 0 ; i < n ; i++){
		a[i] = 0 ; 
	} 
	int sum = 0 ; int dem = 0 ; 
	vector<int> ve ; 
	int f = pow(2,n) ; 
	for(int m = 0 ; m < f ; m++){
		
	    for(int i = 0 ; i < n ; i++ ){
		   if(a[i] == 1) {
			  sum += b[i] ;
			  ve.push_back(b[i]) ; 
		   }
	   }
	    if(sum==k) {
		   dem += 1 ; 
		   for(int j : ve) cout << j << " " ; 
		   cout << endl ;  
		}
		sum  = 0 ; 
		sinh(a,n) ; 
		ve.clear() ; 
	}
	cout << dem << endl ; 
}

int main()
{
	ios::sync_with_stdio(false) ; 
	cin.tie(0) ; 
	
	int n , k ; 
	cin >> n >> k ; 
	int a[n] ; 
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ; 
	}
	solve(a,n,k) ; 
	return 0 ; 
}
		
		

