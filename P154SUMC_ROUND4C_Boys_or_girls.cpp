#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	bool a[26];
	for (int i = 0; i < s.length(); i++){
		a[s[i] - 'a'] = 1;
	}
	int count = 0;
	for (int i = 0; i < 26; i++){
		if (a[i] == 1) count++;
	}
	if (count % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}
