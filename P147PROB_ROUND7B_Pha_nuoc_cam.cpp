#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long tong = 0;
	for (int i = 1; i <= n; i++){
		long long a;
		cin >> a;
		tong += a;
	}
	cout << setprecision(12) << fixed << (tong * 1.0 * 100) / (n * 100);
	return 0;
}
