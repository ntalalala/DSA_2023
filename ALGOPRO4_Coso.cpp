#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; 
	cin >> s;
	while (s.length() % 3 != 0){
		s = '0' + s;
	}
	string n = "0";
	for (int i=0; i < s.length(); i+=3){
		int tmp = (s[i]-'0')* 4 +  (s[i+1]-'0')* 2 +  (s[i+2]-'0');
		char c = tmp + '0';
		n += c;
	}
	cout << n.erase(0,1);
	return 0;
}
