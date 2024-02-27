#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, n = "";
	cin >> s;
	while(s.length() % 3 != 0) s = '0' + s;
	for (int i = 0; i < s.length(); i+= 3){
		int tmp = ((s[i] - '0') * 4 + (s[i+1] - '0') * 2 + (s[i+2] - '0') ) ;
		char c = tmp + '0';
		n += c;
	}
	cout << n;
	return 0;
}
