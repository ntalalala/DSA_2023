#include<bits/stdc++.h>
using namespace std;
int main(){
	while (true){
		string s;
		cin >> s;
		if ( s == "end") break;
		long long tong = 0;
		for (int i = 0; i < s.length(); i++){
			if ( '0' <= s[i] && s[i] <= '9') tong += s[i] - '0';
			else if ('A' <= s[i] && s[i] <= 'Z') tong += s[i] - 55;
			else if ('a' <= s[i] && s[i] <= 'z') tong += s[i] - 61;
		}
		if (tong % 61 == 0) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}
