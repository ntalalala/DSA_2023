#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull tongchuso(ull a){
	ull tong = 0;
	while(a > 0){
		tong += a % 10;
		a = a / 10;
	}
	return tong;
}
ull tongnhantu(ull a){
	ull tong = 0;
	for (int i = 2; i <= sqrt(a); i++){
		while (a % i == 0 && a > 0){
			a = a/i;
			tong += tongchuso(i);
		}
	}
	if (a != 1) tong += tongchuso(a);
	return tong;
	
}
int main(){
	ull a;
	cin >> a;
	if (tongchuso(a) == tongnhantu(a)) cout << "YES";
	else cout << "NO";
	return 0;
}
