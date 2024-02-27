#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull rutgon(ull n){
	if (n < 10) return n;
	else {
		ull tong = 0;
		while(n > 0){
			tong += n % 10;
			n = n / 10;
		}
		return rutgon(tong);
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		ull a;
		cin >> a;
		cout << rutgon(a) << endl;
	}
	return 0;
}
