#include<bits/stdc++.h>
using namespace std;
int main(){
	string s = "";
	int t = 10;
	while (t--){
		int a;
		cin >> a;
		s += (a % 42) + '0';
	}
	for (int i = 0; i < s.length() - 1; i++){
		for (int j = i + 1; j < s.length(); j++){
			if (s[i] == s[j]) {
				s.erase(j, 1);
				j--;
			}
		}
	}
	cout << s.length();
	return 0;
}
