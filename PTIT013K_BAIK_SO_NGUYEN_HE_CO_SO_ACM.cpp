#include<bits/stdc++.h>
using namespace std;
int factor(int i){
	if (i == 1) return 1;
	return i * factor(i - 1);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int sum = 0;
		int k = s.length();
		for (int i = 0; i < k; i++){
			sum += (s[i] - '0')*factor(k - i);
		}
		cout << sum << endl;
	}
	return 0;
}
