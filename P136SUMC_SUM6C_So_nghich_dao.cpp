#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2;
	cin >> s1 >> s2;
	int dem1 = 0, dem2 = 0;
	for (int i = 2; i >= 0; i--){
		dem1 = dem1 * 10 + (s1[i] - '0');
		dem2 = dem2 * 10 + (s2[i] - '0');
	}
	if (dem1 > dem2) cout << dem1;
	else cout << dem2;
	return 0;
}
