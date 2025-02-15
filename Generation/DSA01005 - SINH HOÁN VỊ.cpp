#include<bits/stdc++.h>
using namespace std ; 

int main()
{
	int t  ; 
	cin >> t ; 
	while(t--){
		int n ; 
		cin >> n ; 
		int a[n] ; 
		for(int i = 1 ; i <= n ; i++ ){
			 a[i-1] = i ; 
		}
		long long m = 1 ;
		for(int i = 1 ; i <= n ; i++ ){
			m *= i ; 
		}
		for(int i = 0 ; i < m ;i++){
			for(int i = 0 ; i < n ; i++){
			    cout << a[i] ; 
	     	}
	     	next_permutation(a,a+n) ; 
		    cout << " " ; 
    	}
    	cout << endl ; 
    }
}
