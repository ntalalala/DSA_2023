#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long a1 = n / 4;
	long long a4 = 0, a7 = 0;
	for (int i = 0; i <= a1; i++){
		if ((n - 4*i) % 7 == 0) {
			a4 = i;
			a7 = (n - 4*i) / 7;
			break;
		}
	}
	if (a4 <= 0 && a7 <= 0) cout << "-1";
	else {
		for (int i = 1; i <= a4; i++) cout << "4";
		for (int i = 1; i <= a7; i++) cout << "7";
	}
	return 0;
}
