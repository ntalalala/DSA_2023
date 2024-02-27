#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int a[t + 2];
	memset(a , 0, sizeof(a));
	for (int i = 1; i <= t; i++){
		cin >> a[i];
	}
	int m;
	cin >> m;
	while (m--){
		int k1, k2;
		cin >> k1 >> k2;
		a[k1 - 1] += k2 - 1;
		a[k1 + 1] += a[k1] - k2;
		a[k1] = 0;
	}
	for (int i = 1; i <= t; i++){
		cout << a[i] << endl;
	}
	return 0;
}
