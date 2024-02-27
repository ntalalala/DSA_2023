#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	map < string, int> m;
	m["Vietnam"] = 0; m["Indonesia"] = 0;
	while (t--){
		string s;
		cin >> s;
		m[s] ++;
	}
	if (m["Vietnam"] > m["Indonesia"]) cout << "Vietnam";
	else cout << "Indonesia";
	return 0;
}
