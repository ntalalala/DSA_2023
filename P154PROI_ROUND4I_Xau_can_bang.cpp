#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int l = s.length();
	for (int i = 1; i <= l / 2; i++){
		int h = abs(s[i-1] - s[i]);
		int k = abs(s[l - i] - s[l - i - 1]);
		if ( h != k) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if (check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
 	}
 	return 0;
}
