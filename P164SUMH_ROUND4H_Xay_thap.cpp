#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long tong = 0;
	int i = 0;
	while (tong <= n){
		i++;
		tong += ((i + 1) * i) / 2;
	}
	cout << i - 1;
	return 0;
}
