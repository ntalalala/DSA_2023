#include<bits/stdc++.h>
using namespace std;
int a[101];
int main(){
	memset(a, 0, sizeof(a));
	int k[4];
	k[0] = 0;
	cin >> k[1] >> k[2] >> k[3];
	int min = 100, max = 0;
	for (int i = 0; i < 3; i++){
		int b1, b2;
		cin >> b1 >> b2;
		for (int i = b1 + 1; i <= b2; i++) a[i] ++;
		min = b1 > min ? min : b1;
		max = b2 < max ? max : b2 ;
	}
	long long tong = 0;
	for (int i = min; i <= max; i++){
		tong += a[i] * k[a[i]];
	}
	cout << tong;
	return 0;
}
