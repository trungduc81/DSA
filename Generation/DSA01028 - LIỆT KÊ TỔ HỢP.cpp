#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

void sinh(int n , vector<int> &a  ){
	int k = a.size() ; 
	int i = k - 1 ; 
	while(i >= 0 && a[i] == n - k + i + 1) i-- ; 
	if(i >= 0){
		a[i]++ ; 
		for(int j = i + 1 ; j < k ;j++){
			a[j] = a[j-1] + 1 ; 
		}
	}
}

// De cho C(20,10) khong the dung cong thuc to hop binh thuong
// Bien doi C(20,10) = n*(n-1)*(n-2)*..(n-k+1)/ k! 


ll combination(int n , int k){
	ll res = 1 ; 
	for(int i = 0 ; i < k ; i++ ){
		res = res * (n - i ) / (i + 1)  ; 
	}
	return res ; 
}

void solve(int a[] , int n , int k ){
	set<int> se(a,a+n) ; 
    int s = se.size() ;
    vector<int> b(se.begin() , se.end() ) ;  
	int m = combination(s,k) ;
	vector<int> c(k) ; 
	for(int i = 0 ; i < k ; i++){
		c[i] = i + 1 ; 
	}
	for(int i = 0 ; i < m ; i++ ){
		for(int j = 0 ; j < k ; j++ ){
			cout << b[c[j] - 1 ] << " " ; 
		}
		cout << endl ; 
		sinh(s,c) ; 
	}	
}

int main() {    
        faster();
        int n , k ; 
        cin >> n >> k ; 
        int a[n] ;
        for(int i = 0 ; i < n ; i++ ){
        	cin >> a[i] ; 
		}
        solve(a,n,k); 
}

