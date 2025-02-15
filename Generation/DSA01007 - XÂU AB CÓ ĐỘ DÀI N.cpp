#include<bits/stdc++.h>
using namespace std ;  

void sinh(string &s){
	int i = s.size() - 1 ; 
	while(i>=0 && s[i] == 'B'){
		s[i] = 'A' ; 
		i-- ; 
	}
	if(i>=0) s[i] = 'B' ; 
}

void solve(int n){
	string s = "" ; 
	for(int i = 0 ; i < n ; i++){
		s += 'A' ; 
	}
	int m = pow(2,n) ; 
	for(int i = 0 ; i < m ; i++){
			cout << s << " " ; 
		    sinh(s) ; 
	}
	cout << endl ; 
}

int main()
{
	int t ; 
	cin >> t ; 
	while(t--){
		int n ; 
		cin >> n ; 
		solve(n) ; 
	}
}
