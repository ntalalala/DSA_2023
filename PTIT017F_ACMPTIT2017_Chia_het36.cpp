#include<bits/stdc++.h>
using namespace std;
bool check9(string s){
	long long tong = 0;
	for (int i = 0; i < s.length(); i++){
		tong += s[i] - '0';
	}
	if (tong % 9 == 0) return true;
	return false;
}
bool check4(string s){
	int a = (s[s.length() - 2] - '0')* 10 + (s[s.length() - 1] -'0');
	if (a % 4 == 0) return true;
	return false;
}
int main(){
	int t;
	cin >> t; 
	while (t--){
		string s;
		cin >> s;
		if (check4(s) && check9(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
