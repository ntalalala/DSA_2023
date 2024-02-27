#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector <int> v;
		for (int i = 0; i < s.length(); i++) {
			if ('a' <= s[i] && s[i] <= 'z') s[i] = (char)(s[i] - 32);
		}
		for (int i = 0; i < s.length(); i++){
			if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') v.push_back(2);
			else if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') v.push_back(2);
			else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') v.push_back(3);
			else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') v.push_back(4);
			else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') v.push_back(5);
			else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') v.push_back(6);
			else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') v.push_back(7);
			else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') v.push_back(8);
			else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') v.push_back(9);
		}
		bool flag  = 1;
		int k = v.size() / 2;
		for (int i = 0; i < k && flag; i++){
			if (v[i] != v[v.size() - 1 - i]){
				cout << "NO" << endl;
				flag = 0;
			}
		}
		if (flag == 1) cout << "YES" << endl;
	}
	return 0;
}
