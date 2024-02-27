#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int k;
		cin >> k;
		long long a[k];
		for (int i = 0; i < k; i++){
			cin >> a[i];
		}
		long long k2 = (long long)a[0] * a[1];
		cout << k2 << " ";
		for (int i = 1; i < k - 1; i++){
			long long tmp = a[i-1] * a[i + 1];
			cout << tmp << " ";
		}
		long long k1 = (long long)a[k - 2] * a[k - 1];
		cout << k1 << endl;
	}
	return 0;
}
