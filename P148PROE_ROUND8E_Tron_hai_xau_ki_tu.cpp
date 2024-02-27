#include<bits/stdc++.h>
using namespace std;

int main(){
	while (true){
		int t;
		cin >> t;
		if (t == 0) break;
		string s1, s2, s;
		cin >> s1 >> s2 >> s;
		int dem = 0;
		string c = "";
		while ( dem <= 50){
			string c = "";
			for (int i = 0; i < t; i++){
				c = c + s2[i] + s1[i];
			}
			dem++;
			s1 = c.substr(0, t);
			s2 = c.substr(t, t);
			if (c == s) break;
		}
		if (dem > 50) cout << "-1" << endl;
		else cout << dem << endl;
		}
	return 0;
}
