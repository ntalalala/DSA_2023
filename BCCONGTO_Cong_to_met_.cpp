#include<bits/stdc++.h>
using namespace std;
int main(){
	while (true){
		string s;
		cin >> s;
		if (s == "0") break;
		long long so = 0, l = s.length();
		for (int i = 0; i < l; i++){
			long long t = s[i] - '0';
			if (t > 4) t--;
			so = so*9 + t;
		}
		cout << s << ": " << so << endl;
	}
	return 0;
}

