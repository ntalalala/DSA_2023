#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		int a[26];
		memset (a, 0, sizeof(a));
		for (int i = 0; i < s.length(); i++){
			if (s[i] == ' ') {
				s.erase(i,1);
				i--;
			}
			else {
				if ('A' <= s[i] && s[i] <= 'Z') s[i] = (char)(s[i] + 32);
				a[s[i] - 'a']++;
			}
		}
		int tong = 0;
		for (int i = 0; i < 26; i++){
			if (a[i] > 1) tong += a[i];
		}
		cout << tong << " ";
		for (int i = 0; i < s.length(); i++){
			if (a[s[i] - 'a'] != 0){
				cout << s[i];
				a[s[i] - 'a'] = 0;
			}
		}
		cout << endl;
	}
	return 0;
}
