#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	string s;
	cin >> s;
	int dem = 0;
	int tong1 = 0, tong2 = 0;
	for (int i = 0; i < t / 2; i++){
		tong1 += s[i] - '0'; 
	}
	for (int i = t - t / 2; i < t; i++){
		tong2 += s[i] - '0'; 
	}
	for (int i = 0; i < t; i++){
		if (s[i] != '4' && s[i] != '7') {
			dem = 1;
			break;
		}
	}
	if (dem == 0 && tong1 == tong2) cout << "YES";
	else cout << "NO";
	return 0;
}
