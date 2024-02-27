#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	ull n;
	cin >> n;
	ull i = 1, tong = 0, somoi = 0;
	while ( tong <= n){
		somoi += i;
		tong += somoi;
		++i;
	}
	cout << i - 2;
	return 0;
}
