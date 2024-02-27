#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	map < char, int > m;
	m['L'] = 0; m['R'] = 0; m['?'] = 0;
	for (int i = 0; i < s.length(); i++){
		m['s[i]'] ++;
	}
	int max = m['L'] < m['R'] ? m['R'] : m['L'];
	cout << max + m['?'];
	return 0;
}
