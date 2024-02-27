#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b){
	if (b == 0) return a;
	return ucln(b, a % b);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		cin >> a;
		a = a % 360;
		long long k = ucln(a, 180);
		long long k1 = a / k, k2 = 180 / k;
		if (k1 == 1 && k2 == 1) cout << "$" << endl;
		else if (k1 != 1 && k2 == 1) cout << "0$" << endl;
		else if (k1 == 1 && k2 != 1) cout << "$/" << k2 << endl;
		else cout << k1 << "$/" << k2 << endl;
	}
	return 0;
}
