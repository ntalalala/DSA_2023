#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		long long x, y, p;
		cin >> x >> y >> p;
		long long n = y;
		unsigned long long mod1 = 1;
		while (n--){
			mod1 = ((mod1 % p) * (x % p)) % p;
		}
		cout << mod1 << endl;
	}
	return 0;
}
