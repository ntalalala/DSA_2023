#include<bits/stdc++.h>
using namespace std;
void hieu(string s1, string s2){
	int l1 = s1.length(), l2 = s2.length();
	int max = l1 < l2 ? l2 : l1;
	for (int i = l1; i <= max ; i++) s1 = '0' + s1;
	for (int i = l2; i <= max ; i++) s2 = '0' + s2;
	string k = s1;
	int du = 0;
	for (int i = s1.length(); i >= 0; i--){
		int h = (s1[i] - '0') - (s2[i] - '0') - du;
		if (h >= 0) {
			du = 0;
			k[i] = '0' + h;
		}
		else {
			k[i] = '0' + (h + 10);
			du = 1;
		}
	}
	if (k[0] == '0')k.erase(0,1);
	cout << k << endl;
	
}
bool check(string s1, string s2){
	int l1 = s1.length(), l2 = s2.length();
	if (l1 > l2) return 1;
	else if (l1 == l2){
		for (int i = 0; i < l1; i++){
			if (s1[i] > s2[i]) return 1;
			else if (s1[i] < s2[i]) return 0;
		}
	}
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		if (check(s1,s2)) hieu(s1,s2);
		else hieu(s2,s1);
	}
	return 0;
}
