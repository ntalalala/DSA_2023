#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	string s1, s2;
	cin >> s1 >> s2;
	long long dem = 0;
	for (int i = 0; i < t; i++){
		int a1 = s1[i] - '0', a2 = s2[i] - '0';
		long long kc1 = abs(a1 - a2);
		long long kc2 = 10 - abs(a1 - a2);
		if (kc1 > kc2) dem += kc2;
		else dem += kc1;
	}
	cout << dem;
	return 0;
}
