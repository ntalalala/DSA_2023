#include<bits/stdc++.h>
using namespace std;
long long uocchan(long long a){
	long long dem = 0;
	if ( a % 2 != 0 || a == 0) return 0;
	else if (a == 2) return 1;
	for (int i = 1; i <= sqrt(a); i++){
		if (a % i == 0){
			long long z = a / i;
			if ( i % 2 == 0 ) dem ++;
			if ( z % 2 == 0 && z != i) dem++;
			}
		}
	return dem;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		cin >> a;
		cout << uocchan(a) << endl;
	}
	return 0;
}
