#include<bits/stdc++.h>
using namespace std ; 

void sinh(string &s){
	int i = s.size() - 1 ; 
	while(i>=0 && s[i] == '0'){
		s[i] = '1' ; 
		i-- ; 
	} 
	if(i>=0) s[i] = '0' ; 
}

void in(string &s){
	cout << s << endl ; 
}

void solve(string &s){
	for(int i = 0 ; i < 1 ; i++){
		sinh(s) ; 
	}
	in(s) ; 
}

int main()
{
	int t ; 
	cin >> t ; 
	while(t--){
		string s ; 
		cin >> s ; 
		solve(s) ; 
	}
}


