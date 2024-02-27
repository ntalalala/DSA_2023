#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull tonguoc(ull n){
	ull k = 0;
	for (int i = 1; i < sqrt(n); i++)
		if ( n % i == 0) {
			k += i + n/i;
		}
	ull h = sqrt(n);
	if ( h * h == n) k += h;
	return k;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		ull a;
		cin >> a;
		cout << tonguoc(a) << endl;
	}
	return 0;
}
