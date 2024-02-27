#include<bits/stdc++.h>
using namespace std;
bool bcpalin(string s){
	for (int i = 0; i < s.length() / 2; i++){
		if (s[i] != s[s.length() - i - 1]) return false;
	}
	return true;
}
int main(){
	long long n;
	cin >> n;
	while (n--){
		string s;
		cin >> s;
		if (bcpalin(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
