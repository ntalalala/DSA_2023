#include<bits/stdc++.h>
using namespace std;
bool tong(string s){
	long long sum = 0;
	for (int i = 0; i < s.length(); i++)
	sum += s[i] - '0';
	if (sum % 9 == 0 && sum != 0) return 1;
	else return 0;
}
int main () {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		if (s.length() == 9) cout << "1" << endl;
		else cout << tong(s) << endl;
	}
	return 0;
}
