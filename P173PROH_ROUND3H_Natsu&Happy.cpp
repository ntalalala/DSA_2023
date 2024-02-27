#include<bits/stdc++.h>
using namespace std;
int uocchia2(int n){
	int dem = 0;
	int h = sqrt(n);
	for (int i = 1; i <= h; i++){
		if (n % i == 0) {
			int a = n / i;
			if (a % 2 == 0) dem++;
			if (i % 2 == 0) dem++;
		}
	}
	if (h * h == n && h % 2 == 0) dem--;
	return dem;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int a;
		cin >> a;
		cout << uocchia2(a) << endl;
	}
	return 0;
}
