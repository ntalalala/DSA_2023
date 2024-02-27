#include<bits/stdc++.h>
using namespace std;
long long tong(string s1, string s2){
	int max = s1.length() < s2.length() ? s2.length() : s1.length();
	for (int i = s1.length(); i <= max; i++) s1 = '0' + s1;
	for (int i = s2.length(); i <= max; i++) s2 = '0' + s2;
	string stong = "";
	for (int i = 0; i < s1.length(); i++) stong += '0';
	int du = 0;
	for (int i = s1.length() - 1; i >= 0; i--){
		stong[i] = (((s1[i] - '0') + (s2[i] - '0')) % 10 + du ) + '0';
		du = (((s1[i] - '0') + (s2[i] - '0')) / 10 ); 
	}
	if (stong[0] == '0') stong.erase(0,1);
	long long tong = 0;
	for (int i = 0; i < stong.length(); i++){
		tong = tong*10 + (stong[i] - '0');
	}
	return tong;
}
int main(){
	string s1, s2;
	cin >> s1 >> s2;
	string s1be = s1, s1lon = s1, s2be = s2, s2lon = s2;
	for (int i = 0 ; i < s1.length(); i++){
		if (s1[i] == '6') s1be[i] = '5';
		else if (s1[i] == '5') s1lon[i] = '6';
	}
	for (int i = 0 ; i < s2.length(); i++){
		if (s2[i] == '6') s2be[i] = '5';
		else if (s2[i] == '5') s2lon[i] = '6';
	}
	cout << tong(s1be, s2be) << " " << tong(s1lon, s2lon);
	return 0;
}
