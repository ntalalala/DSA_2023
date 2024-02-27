#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull a[3],b[3];
	ull s = 0;
	for (int i = 0; i < 3; i++){
		cin >> a[i] >> b[i];
		s += a[i] * b[i];
	}
	ull k = sqrt(s); 
	if (k * k != s) {
		cout << "0";
		return 0;
	}
	else {
		for (int i = 0 ; i < 3; i++){
		if ( a[i] > k || b[i] > k) { cout << "0"; return 0;}
	}
	cout << k;
	return 0;
}
}
