#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod4(string s){
	ll a = (s[s.length() - 2] - '0') * 10 + (s[s.length() - 1] - '0');
	return a % 4;
}
ll mod2(string s){
	ll a = s[s.length() - 1] - '0';
	return a % 2;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		ll tong = 1 + (ll)pow (2, mod4(s)) + (ll)pow(3, mod4(s)) + (ll)pow(4, mod2(s));
		cout << tong % 5 << endl;
	}
	return 0;
}
