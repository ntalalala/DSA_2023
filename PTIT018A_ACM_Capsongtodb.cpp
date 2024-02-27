#include<bits/stdc++.h>
using namespace std;
int max(int a, int b){
	if (a >= b) return a;
	return b;
}
int sangngtodoan(int l, int r){
	int dem = 0;
	bool prime[r - l + 1];
	for (int i = 0; i <= r - l; i++){
		prime[i] = 1;
	}
	for (int i = 2; i <= sqrt(r); i++){
		for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i){
			prime[j - l] = 0;
		}
	}
	for (int i = max(l, 2); i <= r - 6; i++){
		if (prime[i - l] && prime[i - l + 6]) dem++;
	}
	return dem;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int a, b;
		cin >> a >> b;
		cout << sangngtodoan(a, b) << endl;
	}
	return 0;
}
