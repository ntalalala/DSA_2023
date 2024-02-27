#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int i;
		if (s[0] == '9')  i = 1;
		else i = 0;
		for ( i ; i < s.length(); i++){
			int k = s[i] - '0';
			if (k > 4) k = 9 - k;
			s[i] = k + '0';
		}
		cout << s << endl;
	}
	return 0;
}
