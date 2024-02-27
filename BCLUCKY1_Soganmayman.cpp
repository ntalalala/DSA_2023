#include<bits/stdc++.h>
using namespace std;
bool xau(string s){
	int dem = 0;
	unsigned long long k = s.length();
	for (int i = 0; i < k; i++){
		if (s[i] == '4' || s[i] == '7') dem++;}
	stringstream ss;
	ss << dem;
	string m = ss.str();
	for (int i = 0; i < m.length(); i++){
		if (m[i] != '4' && m[i] != '7') return 0;}
	return 1;
		
}
int main(){
	string s;
	cin >> s; 
	if (xau(s)) cout << "YES";
	else cout << "NO";
	return 0;
}

