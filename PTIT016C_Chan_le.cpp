#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int dem = 0;
		for (int i = 0; i < s.length(); i++){
			int a = s[i] - '0';
			if (( i % 2 == 0 && a % 2 == 0 ) || (i % 2 != 0 && a % 2 != 0)) {
				cout << "NO" << endl;
				dem++;
				break;
			}
		}
		if (dem == 0) cout << "YES" << endl;
	}
	return 0;
}
