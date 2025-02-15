#include<bits/stdc++.h>
using namespace std ; 

void haha(string &s){
	s = "H" + s + "A" ; 
	
}

int check(string &s){
	int m = s.size() ; 
	for(int i = 1 ; i < m ; i++ ){
		if(s[i] == s[i-1] && s[i-1] == 'H') return 0 ;
	}
	return 1 ; 
}

void sinh(string &s){
	int i = s.size() - 1 ; 
    while(i>=0 && s[i] == 'H'){
    	s[i] = 'A' ; 
    	i-- ; 
	}
	if(i>=0) s[i] = 'H' ; 
}

void solve(int n){
	string s = "" ; 
	for(int i = 0 ; i < n  ; i++){
		s += 'A' ; 
	}
	vector<string> ve ; 
    int f = 1 << n ; 
    for(int i = 0 ; i < f ; i++ ){
    	ve.push_back(s) ; 
    	sinh(s) ; 
	}
	for( auto &j : ve) {
			haha(j) ;
			if(check(j)) {
			cout << j << endl ; 
		}	
	}	 
}

int main()
{
	int t ; 
	cin >> t ; 
	while(t--){
		int n ; 
		cin >> n ; 
		solve(n-2) ; 
	}
	return 0 ; 
}
