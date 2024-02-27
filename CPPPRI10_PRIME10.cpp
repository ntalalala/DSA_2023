#include<bits/stdc++.h>
using namespace std;
long long tongchuso( long long a ){
	long long sum = 0;
	while ( a > 0){
		sum += a % 10;
		a = a / 10;
	}
	return sum;
}
bool ngto(long long a){
	if ( a < 2) return 1;
	for (int i = 2; i <= sqrt(a); i++){
		if (a % i == 0) return 1;
	}
	return 0;
}
long long tonguocngto(long long a){
	long long tong = 0;
	for (int i = 2; i <= sqrt(a); i++){
		while ( a > 0 && a % i == 0){
			a = a / i;
			tong += tongchuso(i); 
		}
	}
	if (a != 1) tong += tongchuso(a);
	return tong;
}
int main () {
	int t; cin >> t;
	while (t--){
		long long a;
		cin >> a;
		if ((tongchuso(a) == tonguocngto(a)) && ngto(a)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
