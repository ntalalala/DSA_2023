#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	while(s.length()){
		string k1 = s.substr(0,3), k2 = s.substr(0,2);
		if (k1 == "144") s.erase(0,3);
		else if (k2 == "14") s.erase(0,2);
		else if (s[0] == '1') s.erase(0,1);
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
