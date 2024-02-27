#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	long long dai = s.length();
	for (int i = 0; i < s.length(); i++){
		if ( s[i] == '0') {
			s.erase(i,1); 
			break; 	
		}
	}
	if ( dai == s.length() ) {
		s.erase(0,1);
		cout << s;
		}
	else cout << s;
	return 0;
}
