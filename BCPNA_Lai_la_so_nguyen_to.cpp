#include<bits/stdc++.h>
using namespace std;
bool ngto(int a){
	for (int i = 2; i <= sqrt(a); i++){
		if ( a % i == 0) return false;
	}
	return a > 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int a, dem = 0;
		cin >> a;
		if (ngto(a)) dem ++;
		int tong;
		for (int i = 2; i <= a/2; i++){
			tong = 0;
			if (ngto(i)){
				for (int j = i; j <= a; j++){
					if (ngto(j)) tong += j;
					if (tong == a) {
						dem ++;
						break;
					}
					else if (tong > a) break;
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}
