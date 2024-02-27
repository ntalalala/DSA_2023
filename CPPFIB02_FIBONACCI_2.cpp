#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[93];
	long long f1 = 1, f2 = 1;
	a[0] = 0;
	a[1] = 1; a[2] = 1;
	for (int i = 3; i <= 92; i++){
		a[i] = f1 + f2;
		f1 = f2;
		f2 = a[i];
	}
	int t;
	cin >> t;
	while (t--){
		long long k;
		cin >> k;
		int i = 0, check = 0;
		while (a[i] <= k && i <= 92){
			if (k == a[i]) {
				cout << "YES" << endl;
				check = 1;
				break;
			}
			i++;
		}
		if (check == 0) cout << "NO" << endl;
	}
	return 0;
}
