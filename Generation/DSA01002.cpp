#include <bits/stdc++.h>
using namespace std;

void sinh(int n , int a[] , int k){
	int i = k - 1 ; 
	while( i >= 0 && a[i] == n - k + i + 1 ) i-- ;
	if(i<0) {
		for(int i = 0 ; i < k ; i++){
			a[i] = i+ 1 ; 
		}
	}
	else a[i]++ ; 
	for(int j = i + 1 ; j < k ; j++){
		a[j] = a[j-1] + 1 ; 
	}
}
int main()
{
	ios::sync_with_stdio(false) ; 
	cin.tie(0) ; 
	
	int t ; 
	cin >> t ; 
	while(t--){
	int n , k ; 
	cin >> n >> k ; 
	int a[k] ; 
	for(int i = 0 ; i < k ; i++){
		cin >> a[i] ; 
	}
	sinh(n,a,k) ; 
	for(int i = 0 ; i < k ; i++){
		cout << a[i] << " " ; 
	}
	cout << endl ; 
    }
	return 0 ; 
}
