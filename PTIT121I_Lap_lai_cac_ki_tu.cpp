#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a, b;
		string s;
		cin >> a >> b >> s;
		string k = "";
		for (int i = 0; i < s.length(); i++){
			for (int j = 1; j <= b; j++){
				k = k + s[i];
			}
		}
		cout << a << " " << k << endl;
	}
	return 0;
}
