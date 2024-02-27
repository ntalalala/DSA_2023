#include<bits/stdc++.h>
using namespace std;
bool a[126];
int main(){
	int t;
	cin >> t;
	for (int i = 65; i <= 122; i++){
		a[i] = 0;
	}
	string s;
	cin >> s;
	for (int i = 0; i < t; i++){
		a[s[i] - 0] = 1;
	}
	for (int i = 65; i <= 90; i++){
		if (a[i] == 0 && a[i+32] == 0) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
