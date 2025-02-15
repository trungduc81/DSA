#include<bits/stdc++.h>
using namespace std ; 

void phatloc(string &s){
	s = "8" + s + "6" ; 
}

bool check(string &s){
	int m = s.size() ; 
	for(int i = 1 ; i < m ; i++ ){
		if(s[i] == s[i-1] && s[i] == '8') return false ;
	}
	return true ; 
}

bool check2(string &s){
	int m = s.size() ; 
	int dem = 0 ; 
	for(int i = 0 ; i < m ; i++){
		if(s[i] =='6') {
			dem ++ ; 
		}
		if(dem>3) return false ; 
		if(s[i] == '8') dem = 0 ; 
	} 
	return true ; 
}

void sinh(string &s){
	int i = s.size() - 1 ; 
	while(i>=0 && s[i] == '8'){
		s[i] = '6' ; 
		i-- ;
	}
	if(i>=0) s[i] = '8' ; 
}

void solve(int n){
	string s = "" ; 
	for(int i = 0 ; i < n ; i++ ){
		s += '6' ; 
	}
	int m = 1 << n ; 
	vector<string> ve ; 
	for(int i = 0 ; i < m ; i++){
		ve.push_back(s) ; 
		sinh(s) ; 
	}
	for(auto i : ve){
		phatloc(i) ; 
		if(check(i) && check2(i)){
			cout << i << endl ;
		}
	}	
}

int main()
{
		int n ; 
		cin >> n ; 
		solve(n-2) ; 
}


