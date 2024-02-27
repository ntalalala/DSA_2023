#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.length() - 1; i++){
		if (s[i] == 'L' && s[i + 1] == 'L') {
			s.erase(i + 1,1);
		}
	}
	if (s.length() + 1 > n) cout << n;
	else cout << s.length() + 1;
	return 0;
}
