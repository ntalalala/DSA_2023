#include<bits/stdc++.h>
using namespace std;
long long a[93];
int main(){
	long long f, f1 = 1, f2 = 1;
	a[1] = 1; a[2] = 1;
	for (int i = 3; i <= 92; i++){
		a[i] = f1 + f2;
		f1 = f2;
		f2 = a[i];
	}
	int t;
	cin >> t;
	while (t--){
		int k;
		cin >> k;
		cout << a[k] << endl;
	}
	return 0;
}
