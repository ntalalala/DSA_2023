#include<bits/stdc++.h>
using namespace std;
void upper(string s){
	for (int i = 0; i < s.length(); i++){
		if ('A' <= s[i] && s[i] <= 'Z') cout << s[i];
		else cout << char(s[i] - 32);
	}
}
void lower (string s){
	for (int i = 0; i < s.length(); i++){
		if ('a' <= s[i] && s[i] <= 'z') cout << s[i];
		else cout << char(s[i] + 32);
	}
}
int main(){
	string s;
	cin >> s;
	int low = 0, upp = 0;
	for (int i = 0; i < s.length(); i++){
		if ('A' <= s[i] && s[i] <= 'Z') upp++;
		else low++;
	}
	if (low >= upp) lower(s);
	else upper(s);
	return 0;
}
