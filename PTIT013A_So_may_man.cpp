#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int k = s.length();
		if ( s[k-1] == '6' && s[k-2] == '8') cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
