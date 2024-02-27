#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull tonguocnt( ull k ){
	ull tong = 0;
	for (int i = 2; i <= sqrt(k); i++){
			while ( k % i == 0){
				tong += i;
				k = k / i;
		}
	}
	if ( k != 1 ) tong += k;
	return tong;
}
int main(){
	ull t;
	cin >> t;
	ull tong = 0;
	while (t--) {
		ull k;
		cin >> k;
		tong += tonguocnt(k);
	}
	cout << tong;
	return 0;
}
