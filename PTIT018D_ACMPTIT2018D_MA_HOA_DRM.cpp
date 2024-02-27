#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int sum1 = 0, a = s.length(), sum2 = 0;
		for (int i = 0; i < a / 2; i++){
			sum1 += s[i];
			sum2 += s[i + a/2];
		}
		for (int i = 0; i < a / 2; i++){
			int tmp = (s[i] - 'A' + sum1) % 26 ;
			s[i] = (char)(tmp + 65);
			int tmp2 = (s[i + a/2] - 'A' + sum2) % 26;
			s[i + a/2] = (char)(tmp2 + 65);
		}
		string k = s.substr(0, a/2);
		for (int i = 0; i < a / 2; i++){
			int tmp1 = ((s[i] - 'A') + (s[i + a/2] - 'A')) % 26;
			k[i] = (char)(tmp1 + 65);
		}
		cout << k << endl;
	}
	return 0;
}
