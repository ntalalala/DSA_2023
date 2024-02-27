#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull ucln(ull a, ull b){
	if (b == 0) return a;
	return ucln(b, a % b);
}
bool nto(ull n){
	for (int i = 2; i <= sqrt(n); i++){
		if ( n % i == 0) return false;
	}
	return n > 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		ull x, tong = 0;
		cin >> x;
		for (int i = 1; i < x; i++){
			if (ucln(i, x) == 1) tong++;
		}
		cout << nto(tong) << endl;
	}
	return 0;
}
