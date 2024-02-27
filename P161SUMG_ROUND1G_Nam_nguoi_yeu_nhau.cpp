#include<bits/stdc++.h>
using namespace std;
int main(){
	int tong = 0;
	for (int i = 0; i < 5; i++){
		int tmp;
		cin >> tmp;
		tong += tmp;
	}
	if (tong % 5 != 0 || tong == 0) cout << "-1";
	else cout << tong / 5;
	return 0; 
}
