#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int a[126];
		for (int i = 97; i <= 122; i++) a[i] = 0;
		for (int i = 0; i < s.length(); i++){
			a[s[i] - 0] ++;
		}
		int le = 0;
		for (int i = 97; i <= 122; i++){
			if (a[i] % 2 != 0) le++;
		}
		if (le >= 4) {
			cout << "NO" << endl;
		}
		else 
		cout << "YES" << endl;
	}
	return 0;
}
